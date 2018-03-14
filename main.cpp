#include <iostream>
#include "mstack.h"
#include "mqueue.h"
#include "mdeque.h"

using namespace std;

int main () {

    cout << "hi";
    mstack <int> obj_stack;
    obj_stack.push(3);
    obj_stack.pop();
    obj_stack.pop();
    obj_stack.push(2);
    obj_stack.push(2);
    obj_stack.push(8);
    obj_stack.print();

    mqueue <int> obj_queue;
    obj_queue.push(77);
    obj_queue.push(66);
    obj_queue.pop();
    obj_queue.print();

    mdeque <int> obj_deque;
    obj_deque.push_prev(2);
    obj_deque.push_prev(1);
    obj_deque.push_next(56);

    obj_deque.push_next(3);
    obj_deque.print();

    return 0;
}
