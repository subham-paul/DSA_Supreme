#include <bits/stdc++.h>
using namespace std;
void replacePi(char input[])
{
    if (input[0] == '\0')
    {
        return;
    }
    if (input[0] == 'p' && input[1] == 'i')
    {
        int n = strlen(input);
        for (int i = n + 1; i >= 2; i--)
        {
            input[i] = input[i - 2];
        }
        input[n + 2] = '\0';
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
        replacePi(input + 3);
    }
    else
    {
        replacePi(input + 1);
    }
}
int main()
{
    char input[100] = {'x', 'p', 'i', 'x'};
    replacePi(input);
    for (auto val : input)
    {
        cout << val;
    }
    cout << endl;
    return 0;
}