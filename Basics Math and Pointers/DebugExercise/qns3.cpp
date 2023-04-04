#include <bits/stdc++.h>
using namespace std;
int* foo() {
    int x = 10;
    int* p = &x;
    return p;
}

int main() {
    int* q = foo();
    cout << *q << endl; // Expected output: 10, Actual output: some random value
    return 0;
}