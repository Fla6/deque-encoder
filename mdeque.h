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
    if (end == nullptr) {
        start = new Node<sTYPE>(value);
        end = start;
    } else {
        Node<sTYPE> * q = new Node<sTYPE>(value);
        end->next = q;
        q->prev = end;
        end = q;
    }
    size++;
    qDebug() << "new  push end " << end->data;

}

template <typename sTYPE>
void mdeque<sTYPE>::push_next(sTYPE value) {
    if (start == nullptr) {
        start = new Node<sTYPE>(value);
        end = start;
    } else {
        Node<sTYPE> * q = new Node<sTYPE>(value);
        start->prev = q;
        q->next = start;
        start = q;
    }
    size++;
    qDebug() << "new  push start " << start->data;
}

template <typename sTYPE>
void mdeque<sTYPE>::pop_prev() {

}

template <typename sTYPE>
void mdeque<sTYPE>::pop_next() {

}

template <typename sTYPE>
void mdeque<sTYPE>::print() {
    Node<sTYPE>* q = start;
    while (q) {
        qDebug() << "- " << q->data;
        q = q->next;
    }
    qDebug() << "Stack size is " << size;
}

template <typename sTYPE>
mdeque<sTYPE>::~mdeque() {

}
#endif // MDEQUE_H
