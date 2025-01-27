#ifndef ASTNODE_H
#define ASTNODE_H

#include <string>
#include <vector>
#include <memory>

struct ASTNode {
    std::string type;
    std::string value;
    std::vector<std::shared_ptr<ASTNode>> children;

    ASTNode(const std::string& t, const std::string& v = "") : type(t), value(v) {}

    void addChild(std::shared_ptr<ASTNode> child) {
        children.push_back(child);
    }
};

#endif // ASTNODE_H
