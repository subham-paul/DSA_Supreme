#include <iostream>
using namespace std;
void findEvenOdd(int x)
{
    if (/* x%2 == 0 */ (x & 1) == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number here -> ";
    cin >> n;
    findEvenOdd(n);
    return 0;
}