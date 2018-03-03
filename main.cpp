#include <iostream>
#include "mstack.h"

using namespace std;

int main () {

    cout << "hi";
    mstack <int> obj;
    obj.push(1);
        obj.push(1);
            obj.push(1);
    return 0;
}
