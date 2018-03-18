#include <iostream>
#include <fstream>
#include "mstack.h"
#include "mqueue.h"
#include "mdeque.h"

mdeque <char> * obj_deque = new mdeque<char>;

char switcher (char cc);

int main () {

    std::ifstream file_deque("deque.txt"); //символы дека
    std::ifstream file_input("input.txt"); //исходный текст
    std::ofstream file_output("output.txt"); //зашифрованный текст

    char rd;
    if (file_deque.is_open()) {
        while (file_deque.get(rd)) {
            if (rd!='\n')
            obj_deque->push_end(rd);
        }
    } else return 1;

    char ri;
    if (file_input.is_open()) {
        while (file_input.get(ri)) {
        if (ri!='\n')  {
            for (int i=0; i < obj_deque->size; i++) {
                char ch = obj_deque->r_end();
                if (ri==ch) {
                    ri = switcher(ri);
                    break;
                } else {
                    obj_deque->push_start(ch);
                    obj_deque->pop_end();
                }
            }

        }
        file_output << ri;

        }
    } else return 1;

    file_input.close();
    file_output.close();
    return 0;
}

char switcher (char cc) {

    for (int j=0; j < 2; j++) {
        obj_deque->push_start(cc);
        obj_deque->pop_end();
        cc= obj_deque->r_end();
    }

    return cc;
}
