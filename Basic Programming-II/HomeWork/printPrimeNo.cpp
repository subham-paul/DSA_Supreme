#include <iostream>
#include<cmath>
using namespace std;
void printPrime(int x) {
    for (int i = 2; i <= x; ++i) {// loop to check for each number in the range
        int ctr = 0; // to maintain factor count 
        for (int j = 2; j <= sqrt(i); ++j) {// checking for factors
            if (i % j == 0) {
                ctr = 1; // increasing factor count when found
            }
        } if (ctr == 0) // checking and printing prime numbers
        {
            cout << i << ", ";
        }
    }
}
int main() {
    int n;
    cout << "Enter a Number -> ";
    cin >> n;
    printPrime(n);
    return 0;
}