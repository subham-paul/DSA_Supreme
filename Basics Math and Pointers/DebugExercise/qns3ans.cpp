#include <bits/stdc++.h>
using namespace std;
int* foo() {
    int* p = new int; // Fix
    *p = 10;
    return p;
}

int main() {
    int *q = foo();
    cout << *q << endl;
    return 0;
}