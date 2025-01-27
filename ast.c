#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

// Ensure these functions are defined exactly as in the header
ASTNode* create_node(NodeType type, const char* value) {
    ASTNode* node = malloc(sizeof(ASTNode));
    node->type = type;
    node->value = value ? strdup(value) : NULL;
    node->children = NULL;
    node->child_count = 0;
    return node;
}

void add_child(ASTNode* parent, ASTNode* child) {
    if (!parent || !child) return;

    parent->children = realloc(parent->children, 
        (parent->child_count + 1) * sizeof(ASTNode*));
    parent->children[parent->child_count++] = child;
}

void print_ast_helper(ASTNode* node, int depth) {
    if (!node) return;

    // Indent based on depth
    for (int i = 0; i < depth; i++) {
        printf("  ");
    }

    // Print node type and value
    const char* node_type_names[] = {
        "PROGRAM", "CLASS", "METHOD", "STATEMENT", "EXPRESSION", 
        "METHOD_CALL", "LAYER_DEFINITION", "SEQUENTIAL_LAYER", 
        "NUMERIC_LITERAL", "VARIABLE", "OPERATION"
    };

    printf("%s", node_type_names[node->type]);
    if (node->value) {
        printf(": %s", node->value);
    }
    printf("\n");

    // Recursively print children
    for (int i = 0; i < node->child_count; i++) {
        print_ast_helper(node->children[i], depth + 1);
    }
}

void print_ast(ASTNode* node, int depth) {
    printf("Abstract Syntax Tree:\n");
    print_ast_helper(node, depth);
}

void free_ast(ASTNode* node) {
    if (!node) return;

    // Free children first
    for (int i = 0; i < node->child_count; i++) {
        free_ast(node->children[i]);
    }

    // Free node's own memory
    free(node->value);
    free(node->children);
    free(node);
} 