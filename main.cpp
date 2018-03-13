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

    return 0;
}
