#include <iostream>
#include "mstack.h"
#include "mqueue.h"
#include "mdeque.h"

using namespace std;

int main () {

    mdeque <int> obj_deque;
    obj_deque.push_end(2);
    obj_deque.push_end(1);
    obj_deque.push_start(56);
    obj_deque.push_start(3);

    obj_deque.pop_end();
    obj_deque.pop_start();
    obj_deque.print_left_right();
    obj_deque.print_right_left();
    cout << "hi";
    obj_deque.pop_end();
    obj_deque.pop_end();
    obj_deque.pop_end();
    obj_deque.print_left_right();
    obj_deque.print_right_left();

     cout << "hi";
    return 0;
}
