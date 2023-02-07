#include <iostream>
using namespace std;
void reverseInt(int n) {
    int reversed_number = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number = " << reversed_number;
}

int main() {
    int n;
    cout << "Enter a Number -> ";
    cin >> n;
    reverseInt(n);
    return 0;
}