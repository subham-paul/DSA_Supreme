#include <iostream>
using namespace std;

bool check_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number -> ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        bool isPrime = check_prime(i);
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}