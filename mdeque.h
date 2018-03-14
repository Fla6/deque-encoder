#ifndef MDEQUE_H
#define MDEQUE_H

#include "node.h" //Anomalous Materials
#include <QDebug>

template <typename sTYPE>
class mdeque {
public:
    Node<sTYPE> *start; //указатель на начало дека
    Node<sTYPE> *end; //указатель на конец дека
    int  size=0;
    mdeque(): start(nullptr), end (nullptr)
    {}
    void push_end(sTYPE);
    void push_start(sTYPE);
    void pop_start();
    void pop_end();
    void print();
    ~mdeque();
};

template <typename sTYPE>
void mdeque<sTYPE>::push_end(sTYPE value) {
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
}

template <typename sTYPE>
void mdeque<sTYPE>::push_start(sTYPE value) {
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
}

template <typename sTYPE>
void mdeque<sTYPE>::pop_end() {
    if (end == nullptr) {
        std::cout << "\n ERROR: Deque is empty " << size << "\n";
        return;
    }
    Node<sTYPE> * q = end;
    end = end->prev;
    end->next=nullptr;
    size--;
    delete q;
    if (end->prev==nullptr) {
        start = nullptr;
    }

    //if (end)  else start = nullptr;
}

template <typename sTYPE>
void mdeque<sTYPE>::pop_start() {
    if (start == nullptr) {
        std::cout << "\n ERROR: Deque is empty " << size << "\n";
        return;
    }
    Node<sTYPE> * q = start;
    start = start->next;
    start->prev=nullptr;
    size--;
    delete q;
    //if (!end) end = nullptr;
}

template <typename sTYPE>
void mdeque<sTYPE>::print() {
    Node<sTYPE>* q = start;
    while (q) {
        std::cout << " " << q->data;
        q = q->next;
    }
    std::cout  << "\n Deque size is " << size << "\n";
}

template <typename sTYPE>
mdeque<sTYPE>::~mdeque() {
    while (size > 0) {
        qDebug() << size << " - " << end->prev << " - " << end->next;
        qDebug() << size << " - " << start->prev << " - " << start->next;
        pop_end();
    }
    qDebug() << "Деструктор сработал! " << size;

}
#endif // MDEQUE_H
