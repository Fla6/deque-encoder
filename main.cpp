#include <iostream>
#include "mstack.h"

using namespace std;

int main () {

    cout << "hi";
    mstack <int> obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);

    obj.pop();
    return 0;
}
