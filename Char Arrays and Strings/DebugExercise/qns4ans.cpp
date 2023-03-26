#include <iostream>
using namespace std;
string isPalindrome(string S)
{
    int N = S.length();
    for (int i = 0; i < (N / 2); i++) { // Fix
        if (S[i] != S[N - i - 1]) { // Fix
            return "No";
        }
    }
    return "Yes";
}

int main(){
    string str= "madam";
    cout<<isPalindrome(str);
    return 0;
}