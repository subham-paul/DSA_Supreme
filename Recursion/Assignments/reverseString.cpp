#include <iostream>
#include <string>
using namespace std;
void reverseString(string &s, int start, int end) { // string use as by Reference
    // base case
    if (start >= end) {
        return;
    }

    // Ek case solve
    swap(s[start], s[end]);

    // baki recursion dekhlega
    reverseString(s, start + 1, end - 1);
}
int main() {
    /* Here T.C-> O(n), S.C-> O(n) */
    string str = "abcdE";
    int start = 0;
    reverseString(str, start, str.size() - 1);
    cout << str << endl;
    return 0;
}