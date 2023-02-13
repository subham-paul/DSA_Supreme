#include <iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n) {
    int decimal = 0, i = 0;
    while (n) {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

int main() {
    int n;
    cout << "Enter Binary Number -> "; // like 1001
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    return 0;
}