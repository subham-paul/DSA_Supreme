#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int N = 5;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << " ";
    }
    return 0;
}