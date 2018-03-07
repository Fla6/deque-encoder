#ifndef MSTACK_H
#define MSTACK_H

#include "node.h"
#include <QDebug>

template <typename sTYPE>
class mstack {
public:
//    sTYPE data; //данные с элементе
//    mstack *next; //указатель на след эл стека
    Node<sTYPE> *top; //указатель на низ стека
    int size=0;

    mstack (): top(nullptr)
    {}
    void push (sTYPE);
    void pop (); //удаление эл из стека
    void print ();
    ~mstack();
};

template <typename sTYPE>
void mstack<sTYPE>::push(sTYPE value) {
    qDebug() << "1 " << top;
    if  (top == nullptr) {
        top = new Node<sTYPE> (value);
    } else {
        Node<sTYPE>* q = new Node<sTYPE>(value,top);
        top = q;
    }
    qDebug() << "2 " << top;
}
//Доделать!
template <typename sTYPE>
void mstack<sTYPE>::pop() {
    if (top == nullptr) {
        return;
    }
    Node<sTYPE>* q = top;
    top = top->next;
    delete q;
}

template <typename sTYPE>
void mstack<sTYPE>::print() {
    Node<sTYPE>* q = top;
    while (q) {
        qDebug() << "- " << q->data;
        q = q->next;
    }
}

template <typename sTYPE>
mstack<sTYPE>::~mstack() {

}
#endif // MSTACK_H
