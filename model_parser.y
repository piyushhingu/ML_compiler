%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "model_parser.tab.h"
#include "ast.h"

void yyerror(const char *s);
int yylex(void);

// Global root of the AST
ASTNode* ast_root = NULL;
%}

%union {
    char* sval;  // for string tokens (e.g., IDENTIFIER, STRING)
    int ival;    // for INTEGER tokens
    float fval;  // for FLOAT tokens
    struct ASTNode* node;  // for AST nodes
}

%token CLASS NN_MODULE DEF SUPER INIT SELF FORWARD EQUALS LPAREN RPAREN COLON COMMA DOT RESHAPE SEQUENTIAL CONV2D BATCHNORM2D RELU MAXPOOL2D LINEAR MULTIPLY RETURN
%token <sval> INTEGER FLOAT
%token <sval> STRING IDENTIFIER

// Precedence to resolve conflicts
%left COMMA
%left MULTIPLY
%left DOT
%precedence RESHAPE

// Correct type declarations for non-terminals
%type <node> program class_def methods method_definition method_body
%type <node> statement expression method_call method_operation
%type <node> layer_definition sequential_layer
%type <node> constructor layers_definition layer_definition_full
%type <node> sequential_layer_content

%type <sval> class_name layer_name param_name method_name
%type <sval> nested_layer_params layer_param_list layer_param
%type <sval> param_list layer_args
%type <sval> arithmetic_expression numeric_literal numeric_value value
%type <sval> argument var method_params
%type <sval> arguments
%type <sval> layer_type

%%

program:
    class_def methods {
        ast_root = create_node(NODE_PROGRAM, NULL);
        add_child(ast_root, $1);
        add_child(ast_root, $2);
        $$ = ast_root;
    }
    ;

class_def:
    CLASS class_name LPAREN NN_MODULE RPAREN COLON constructor {
        ASTNode* class_node = create_node(NODE_CLASS, $2);
        add_child(class_node, $7);
        $$ = class_node;
    }
    ;

class_name:
    IDENTIFIER { $$ = $1; }
    ;

constructor:
    DEF INIT LPAREN SELF COMMA param_list RPAREN COLON super_call layers_definition {
        ASTNode* constructor_node = create_node(NODE_METHOD, "constructor");
        add_child(constructor_node, $10);  // Add layers_definition as a child
        $$ = constructor_node;
    }
    ;

param_list:
    IDENTIFIER { $$ = $1; }
    | param_list COMMA IDENTIFIER { 
        char* temp = malloc(strlen($1) + strlen($3) + 3);
        sprintf(temp, "%s, %s", $1, $3);
        free($1);
        $$ = temp;
    }
    ;

super_call:
    SUPER LPAREN class_name COMMA SELF RPAREN DOT INIT LPAREN RPAREN
    ;

layers_definition:
    layer_definition_full layers_definition {
        ASTNode* layers_node = create_node(NODE_STATEMENT, "layers");
        add_child(layers_node, $1);
        if ($2) {
            add_child(layers_node, $2);
        }
        $$ = layers_node;
    }
    | /* empty */ { $$ = NULL; }
    ;

layer_definition_full:
    SELF DOT layer_name EQUALS layer_definition {
        ASTNode* layer_def_node = create_node(NODE_LAYER_DEFINITION, $3);
        add_child(layer_def_node, $5);
        $$ = layer_def_node;
    }
    ;

layer_definition:
    layer_type layer_args { 
        char* temp = malloc(strlen($1) + strlen($2) + 10);
        sprintf(temp, "%s(%s)", $1, $2);
        free($1);
        free($2);
        $$ = create_node(NODE_LAYER_DEFINITION, temp);
    }
    | sequential_layer { $$ = $1; }
    ;

layer_args:
    LPAREN nested_layer_params RPAREN { $$ = $2; }
    ;

nested_layer_params:
    layer_param_list { $$ = $1; }
    | /* empty */ { $$ = strdup(""); }
    ;

layer_param_list:
    layer_param { $$ = $1; }
    | layer_param_list COMMA layer_param { 
        char* temp = malloc(strlen($1) + strlen($3) + 3); 
        sprintf(temp, "%s, %s", $1, $3); 
        free($1); 
        $$ = temp; 
    }
    ;

layer_param:
    param_name EQUALS value { 
        char* temp = malloc(strlen($1) + strlen($3) + 2); 
        sprintf(temp, "%s=%s", $1, $3); 
        free($1); 
        free($3); 
        $$ = temp; 
    }
    | value { $$ = $1; }  // Allow positional arguments
    ;

param_name:
    IDENTIFIER { $$ = $1; }
    ;

numeric_literal:
    INTEGER { $$ = $1; }
    | FLOAT { $$ = $1; }
    | MULTIPLY INTEGER { 
        char* temp = malloc(strlen($2) + 2);
        sprintf(temp, "-%s", $2);
        free($2);
        $$ = temp;
    }
    ;

arithmetic_expression:
    numeric_literal { $$ = $1; }
    | arithmetic_expression MULTIPLY numeric_literal { 
        char* temp = malloc(strlen($1) + strlen($3) + 2);
        sprintf(temp, "%s*%s", $1, $3);
        free($1);
        $$ = temp;
    }
    ;

numeric_value:
    numeric_literal { $$ = $1; }
    | LPAREN arithmetic_expression RPAREN { $$ = $2; }
    ;

value:
    numeric_value { $$ = $1; }
    | STRING { $$ = $1; }
    | var { $$ = $1; }
    ;

methods:
    method_definition methods {
        ASTNode* methods_node = create_node(NODE_STATEMENT, "methods");
        add_child(methods_node, $1);
        if ($2) {
            add_child(methods_node, $2);
        }
        $$ = methods_node;
    }
    | /* empty */ { $$ = NULL; }
    ;

method_definition:
    DEF method_name LPAREN method_params RPAREN COLON method_body {
        ASTNode* method_node = create_node(NODE_METHOD, $2);
        add_child(method_node, $7);
        $$ = method_node;
    }
    ;

method_name:
    FORWARD { $$ = strdup("forward"); }
    | IDENTIFIER { $$ = $1; }
    ;

method_params:
    SELF { $$ = strdup("self"); }
    | SELF COMMA param_list { 
        char* temp = malloc(strlen($3) + 6);
        sprintf(temp, "self, %s", $3);
        free($3);
        $$ = temp;
    }
    ;

method_body:
    statement method_body {
        ASTNode* body_node = create_node(NODE_STATEMENT, NULL);
        add_child(body_node, $1);
        if ($2) {
            add_child(body_node, $2);
        }
        $$ = body_node;
    }
    | RETURN var { 
        char* return_str = malloc(strlen($2) + 8);
        sprintf(return_str, "return %s", $2);
        free($2);
        $$ = create_node(NODE_STATEMENT, return_str);
    }
    | RETURN expression { 
        char* return_str = malloc(strlen($2->value) + 8);
        sprintf(return_str, "return %s", $2->value);
        $$ = create_node(NODE_STATEMENT, return_str);
    }
    | /* empty */ { $$ = NULL; }
    ;

statement:
    var EQUALS expression {
        ASTNode* stmt_node = create_node(NODE_STATEMENT, "=");
        ASTNode* var_node = create_node(NODE_VARIABLE, $1);
        add_child(stmt_node, var_node);
        add_child(stmt_node, $3);
        $$ = stmt_node;
    }
    ;

var:
    IDENTIFIER { $$ = $1; }
    | var DOT IDENTIFIER { 
        char* temp = malloc(strlen($1) + strlen($3) + 2);
        sprintf(temp, "%s.%s", $1, $3);
        free($1);
        $$ = temp;
    }
    ;

expression:
    method_call { $$ = $1; }
    | method_operation { $$ = $1; }
    ;

method_call:
    SELF DOT layer_name LPAREN arguments RPAREN { 
        char* temp = malloc(strlen($3) + strlen($5) + 10);
        sprintf(temp, "self.%s(%s)", $3, $5);
        free($3);
        free($5);
        $$ = create_node(NODE_METHOD_CALL, temp);
    }
    ;

method_operation:
    var DOT method_name LPAREN arguments RPAREN { 
        char* temp = malloc(strlen($1) + strlen($3) + strlen($5) + 4);
        sprintf(temp, "%s.%s(%s)", $1, $3, $5);
        free($1);
        free($3);
        free($5);
        $$ = create_node(NODE_OPERATION, temp);
    }
    | var DOT RESHAPE LPAREN arguments RPAREN %prec RESHAPE { 
        char* temp = malloc(strlen($1) + strlen($5) + 10);
        sprintf(temp, "%s.reshape(%s)", $1, $5);
        free($1);
        free($5);
        $$ = create_node(NODE_OPERATION, temp);
    }
    ;

argument:
    numeric_literal { $$ = $1; }
    | STRING { $$ = $1; }
    | var { $$ = $1; }
    | method_operation { $$ = $1; }
    | LPAREN argument RPAREN { $$ = $2; }  // Allow parenthesized arguments
    ;

sequential_layer:
    SEQUENTIAL LPAREN sequential_layer_content RPAREN { 
        // Create a sequential layer node with all its content
        $$ = create_node(NODE_SEQUENTIAL_LAYER, "nn.Sequential");
        if ($3) {
            // Add all children from sequential_layer_content
            for (int i = 0; i < $3->child_count; i++) {
                add_child($$, $3->children[i]);
            }
        }
    }
    ;

sequential_layer_content:
    layer_definition { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, $1);
        $$ = content_node;
    }
    | layer_definition COMMA sequential_layer_content { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, $1);
        if ($3) {
            // Add all children from the existing sequential_layer_content
            for (int i = 0; i < $3->child_count; i++) {
                add_child(content_node, $3->children[i]);
            }
        }
        $$ = content_node;
    }
    | LPAREN layer_definition RPAREN { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, $2);
        $$ = content_node;
    }
    | LPAREN layer_definition RPAREN COMMA sequential_layer_content { 
        ASTNode* content_node = create_node(NODE_STATEMENT, "sequential_layer");
        add_child(content_node, $2);
        if ($5) {
            // Add all children from the existing sequential_layer_content
            for (int i = 0; i < $5->child_count; i++) {
                add_child(content_node, $5->children[i]);
            }
        }
        $$ = content_node;
    }
    | /* empty */ { $$ = NULL; }
    ;

layer_type:
    CONV2D { $$ = strdup("nn.Conv2d"); }
    | BATCHNORM2D { $$ = strdup("nn.BatchNorm2d"); }
    | RELU { $$ = strdup("nn.ReLU"); }
    | MAXPOOL2D { $$ = strdup("nn.MaxPool2d"); }
    | LINEAR { $$ = strdup("nn.Linear"); }
    ;

layer_name:
    IDENTIFIER { $$ = $1; }
    ;

arguments:
    argument { $$ = $1; }
    | argument COMMA arguments { 
        char* temp = malloc(strlen($1) + strlen($3) + 3);
        sprintf(temp, "%s, %s", $1, $3);
        free($1);
        free($3);
        $$ = temp;
    }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

int main() {
    yyparse();
    
    // Print the AST
    if (ast_root) {
        print_ast(ast_root, 0);
        
        // Free the AST
        free_ast(ast_root);
    }
    
    return 0;
}
