#ifndef MSTACK_H
#define MSTACK_H

#include <QDebug>

template <typename sTYPE>
class mstack {
public:
    mstack (): top(nullptr) {}

    sTYPE data; //данные с элементе
    mstack *next; //указатель на след эл стека
    mstack *top; //указатель на низ стека

    void push (const sTYPE);
    void pop (); //удаление эл из стека
   // ~mstack();
};

template <typename sTYPE>
void mstack<sTYPE>::push(const sTYPE value) {
    mstack *q;
    qDebug() << top;
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

#endif // MSTACK_H
