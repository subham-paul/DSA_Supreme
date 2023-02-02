#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter number here-> ";
    cin >> n;
    /* for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    } */
    while (n >= 1)
    {
        fact = fact * n;
        n--;
    }
    cout << fact;
    return 0;
}