#ifndef MSTACK_H
#define MSTACK_H

#include <QDebug>

template <typename sTYPE>
class mstack {
public:
    sTYPE data; //данные с элементе
    mstack *next; //указатель на след эл стека
    mstack *top; //указатель на низ стека

    mstack (): top(nullptr)
    {}
    void push (const sTYPE);
    void pop (); //удаление эл из стека
   // ~mstack();
};

template <typename sTYPE>
void mstack<sTYPE>::push(const sTYPE value) {
    mstack *q;
    qDebug() << "****" << top;
    q = new mstack();
    q->data = value;
    if (top == nullptr) {
        top = q;
        qDebug() << "null" << top;
    } else {
        q->next = top;
        top = q;
        qDebug() << "smth" << top;

    }
}

template <typename sTYPE>
void mstack<sTYPE>::pop() {
    qDebug() << "pop start top: " << top;
    try
    {
        if (top == nullptr) {
            throw std::out_of_range("Out of range");
        }
        mstack* q = top;
        top = top->next;
        delete q;
    }
    catch (std::exception &errmsg) {
         qDebug() << errmsg.what();
    }
    qDebug() << "pop end top:   " << top;
}

#endif // MSTACK_H
