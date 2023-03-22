#include <iostream>
using namespace std;

int factorialNumber(int n){
    // base case
    if (n == 1) {
        return 1;
    }
    // recursive case
    int smallProb = factorialNumber(n - 1);
    int largeProb = n * factorialNumber(n - 1);
    return largeProb;
}

int main(){
    int n;
    cout << "Enter a number";
    cin >> n;
    cout << factorialNumber(n) << endl;
    return 0;
}