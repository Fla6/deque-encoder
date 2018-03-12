#include <iostream>
#include "mstack.h"
#include "mqueue.h"
#include "mdeque.h"

using namespace std;

int main () {

    cout << "hi";
    mstack <int> obj_stack;
    obj_stack.push(3);
    obj_stack.print();
    obj_stack.pop();
    obj_stack.pop();

    mqueue <int> obj_queue;

    return 0;
}
