#include <iostream>
#include <string.h>
using namespace std;
bool checkPalindrome(char word[]) {
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i <= j) {
        if (word[i] != word[j]) {
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}
int main() {
    char ch[100] = "MadaM";
    if(checkPalindrome(ch) == true) {
        cout<<"It's Palindrome";
    } else {
        cout<<"It's Not Palindrome";
    }
    return 0;
}