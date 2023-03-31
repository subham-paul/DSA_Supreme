#include <iostream>
#include <vector>
using namespace std;

void subSequence(string str, int sLength, string output, int start, vector<string> &ans)
{
    // base case
    if (start == sLength)
    {
        ans.push_back(output);
        return;
    }

    // include
    subSequence(str, sLength, output + str[start], start + 1, ans);

    // exclude
    subSequence(str, sLength, output, start + 1, ans);
}
int main()
{
    string str = "abc";
    int n = str.length();
    string output = "";
    vector<string> v;
    subSequence(str, n, output, 0, v);
    for (auto val : v)
    {
        cout << val << endl;
    }
    return 0;
}