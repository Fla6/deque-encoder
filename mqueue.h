#ifndef MQUEUE_H
#define MQUEUE_H

#include "node.h"
#include <QDebug>

template <typename sTYPE>
class mqueue {
public:
    Node<sTYPE> *start; //указатель на начало очереди
    Node<sTYPE> *end; //указатель на конец очереди
    int  size=0;
    mqueue (): start(nullptr), end (nullptr)
    {}
    void push (sTYPE);
    void pop ();
    void print ();
    ~mqueue();
};

template <typename sTYPE>
void mqueue<sTYPE>::push(sTYPE value) {
    qDebug() << "1 " << end;
    if  (end == nullptr) {
        end = new Node<sTYPE> (value);
        start = new Node<sTYPE> (value);
    } else {
        Node<sTYPE>* q = new Node<sTYPE>(value);
        end->next = q;
        end = q;
    }
    size++;
    qDebug() << "2 " << end;
}

template <typename sTYPE>
void mqueue<sTYPE>::pop() {
    if (start == nullptr) {
        qDebug()<<"Queue is empty or Out of range" << size;
        return;
    }
    Node<sTYPE>* q = start;
    start = start->next;
    delete q;
    size--;

}

template <typename sTYPE>
void mqueue<sTYPE>::print() {
    Node<sTYPE>* q = end;
    while (q) {
        qDebug() << "- " << q->data;
        q = q->next;
    }
    qDebug() << "Queue size is " << size;
}

template <typename sTYPE>
mqueue<sTYPE>::~mqueue() {
    while (size>0) {
        pop();
    }
}
#endif // MQUEUE_H
