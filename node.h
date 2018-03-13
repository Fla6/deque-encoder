//Хранит данные и указатель на след элемент
//Используется для стека mstack и очереди mqueue
#ifndef NODE_H
#define NODE_H

template <typename sTYPE>
class Node {
public:
    sTYPE data;
    Node *next;
    Node *prev; //Используется для дека
    Node (sTYPE value): data(value),  next(nullptr) , prev(nullptr)
    {}
    Node (sTYPE value, Node* top): data(value),  next(top)
    {}
};

#endif // NODE_H
