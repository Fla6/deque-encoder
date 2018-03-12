#ifndef MQUEUE_H
#define MQUEUE_H

#include "node.h"
#include <QDebug>

template <typename sTYPE>
class mqueue {
public:
    Node<sTYPE> *start; //указатель на начало очереди
    Node<sTYPE> *end; //указатель на конец очереди
    int size=0;
    mqueue (): start(nullptr), end (nullptr)
    {}
//    void push (sTYPE);
//    void pop ();
//    void print ();
    ~mqueue();
};

template <typename sTYPE>
mqueue<sTYPE>::~mqueue() {

}
#endif // MQUEUE_H
