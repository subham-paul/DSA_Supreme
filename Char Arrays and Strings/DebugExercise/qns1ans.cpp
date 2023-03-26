#include<iostream>
#include<vector>
using namespace std;

void reverseWords(string s)
{
    vector<string> tmp;
    string str = "";
    for (int i = 0; i < s.length(); i++) { // Strings doesn't have null characters as terminator by default
        if (s[i] == ' ') {
            tmp.push_back(str);
            str = "";
        }
        else
            str += s[i];
    }
    tmp.push_back(str);
    // No return statement as function is void
}
int main(){
    string str ="paul";
    cout<<reverseWords(str);
    return 0;
}