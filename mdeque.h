#ifndef MDEQUE_H
#define MDEQUE_H

#include "node.h"
#include <QDebug>

template <typename sTYPE>
class mdeque {
public:
    Node<sTYPE> *start; //указатель на начало дека
    Node<sTYPE> *end; //указатель на конец дека
    int  size=0;
    mdeque(): start(nullptr), end (nullptr)
    {}
    void push_prev(sTYPE);
    void push_next(sTYPE);
    void pop_prev();
    void pop_next();
    void print();
    ~mdeque();
};

template <typename sTYPE>
void mdeque<sTYPE>::push_prev(sTYPE value) {

}

template <typename sTYPE>
void mdeque<sTYPE>::push_next(sTYPE value) {

}

template <typename sTYPE>
void mdeque<sTYPE>::pop_prev() {

}

template <typename sTYPE>
void mdeque<sTYPE>::pop_next() {

}

template <typename sTYPE>
void mdeque<sTYPE>::print() {

}

template <typename sTYPE>
mdeque<sTYPE>::~mdeque() {

}
#endif // MDEQUE_H
