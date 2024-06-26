#pragma once
#include <vector>

class Node {
protected:
    std::vector<Node*> dependencies;

public:
    virtual double evaluate();
    virtual Node* partial(Node* incoming_gradient, Node* wrt);
    std::vector<Node*> get_dependencies();
};