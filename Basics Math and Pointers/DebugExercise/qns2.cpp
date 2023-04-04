#include <bits/stdc++.h>
using namespace std;
int main() {
    int* p = new int;
    *p = 42;
    delete p;
    return 0;
}

/* “new” is a keyword in C++ that is responsible for Dynamically allocated memory.

“new int” would Dynamically allocate memory for an integer and return it`s address to the variable that is declared at the right side of “new int” */