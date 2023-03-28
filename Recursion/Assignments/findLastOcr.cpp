#include <iostream>
using namespace std;

void lastOccrLTR(string &s, char key, int i, int &ans) {
    // base case
    if (i >= s.size()) {
        return;
    }
    // Ek case ka solution
    if (s[i] == key) {
        ans = i;
    }
    // RE
    lastOccrLTR(s, key, i + 1, ans);
}

void lastOccrRTL(string &s, char key, int i, int &ans) {
    // base case
    if (i < 0) {
        return;
    }
    // Ek case ka solution
    if (s[i] == key) {
        ans = i;
        return;
    }
    // RE
    lastOccrRTL(s, key, i - 1, ans);
}
int main() {
    string str = "abcddedg";
    char key = 'd';
    int ans = -1;

    /* Here T.C -> O(n), S.C -> O(n) */

    lastOccrLTR(str, key, 0, ans); // used for Left to Right function
    cout << "Left to Right find ans -> " << ans << endl;
    lastOccrRTL(str, key, str.size() - 1, ans); // used for Right to Left function
    cout << "Right to Left find ans -> " << ans << endl;
    return 0;
}