#ifndef AST_H
#define AST_H

typedef enum {
    NODE_PROGRAM,
    NODE_CLASS,
    NODE_METHOD,
    NODE_STATEMENT,
    NODE_EXPRESSION,
    NODE_METHOD_CALL,
    NODE_LAYER_DEFINITION,
    NODE_SEQUENTIAL_LAYER,
    NODE_NUMERIC_LITERAL,
    NODE_VARIABLE,
    NODE_OPERATION
} NodeType;

typedef struct ASTNode {
    NodeType type;
    char* value;
    struct ASTNode** children;
    int child_count;
} ASTNode;

// Function prototypes
ASTNode* create_node(NodeType type, const char* value);
void add_child(ASTNode* parent, ASTNode* child);
void print_ast(ASTNode* node, int depth);
void free_ast(ASTNode* node);

#endif 