#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s) {
    vector<char> v;
    for (char ch : s) {
        if (isalnum(ch)) {
            v.push_back(tolower(ch));
        }
    }
    int n = v.size(), left = 0, right = n - 1;

    while (left <= right) {
        if (v[left] != v[right]) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "It's Palindrome";
    } else {
        cout << "It's Not Palindrome";
    }
    return 0;
}