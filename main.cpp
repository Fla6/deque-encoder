#include <iostream>
#include "mstack.h"

using namespace std;

int main () {

    cout << "hi";
    mstack <int> obj;
    obj.push(3);
    obj.push(22);
     obj.print();

    obj.pop();
    obj.push(8);
    //obj.print();

    obj.push(3333);


    obj.print();

    return 0;
}
