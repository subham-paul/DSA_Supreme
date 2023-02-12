#include <iostream>
using namespace std;
long long int factorial(long long int x)
{
    long long int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    /* while (x>0)
    {
        fact*=x;
        x--;
    } */
    return fact;
}
int main()
{
    int n;
    cout << "Enter a number here -> ";
    cin >> n;
    cout << factorial(n)<<endl;
    return 0;
}