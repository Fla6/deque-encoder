#ifndef NODE_H
#define NODE_H

template <typename sTYPE>
class Node {
public:
    sTYPE data;
    Node *next;
    Node (sTYPE value): data(value),  next(nullptr)
    {}
    Node (sTYPE value, Node* node): data(value),  next(node)
    {}
};

#endif // NODE_H
