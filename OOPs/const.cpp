#include <iostream>
using namespace std;

int main()
{
    // const int x = 5; // x is constant
    // // initialization can be done, but we can't re-assign a  value.
    // x = 10;
    // cout << x << endl;

    // // const with pointers
    // const int *a = new int(2); // const data, NON-CONST pointer
    // int const *a = new int(2); // same as line no. 12
    // // cout << *a << endl;
    // *a = 20; // can't change the content of pointer.
    // // cout << *a << endl;
    // int b = 20;
    // a = &b; // pointer itself can be reassigned
    // cout << *a << endl;

    // CONST Pointer, but NON-CONST data
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // run it
    // cout << *a << endl;
    // int b = 50;
    // a = &b; // not run

    // CONST POINTER and CONST DATA
    const int *const a = new int(10);
    cout << *a << endl;
    *a = 50;
    int b = 100;
    a = &b;
    return 0;
}