#include <iostream>
using namespace std;
bool check_prime(int n) {
    for (int i = 2; i < n; i++) {
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number -> ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool isPrime
    }
    
    return 0;
}