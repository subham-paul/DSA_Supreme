#include <iostream>
using namespace std;
int binaryToDecimal(int b)
{
    int ans=0;
    int c = 0;
    while (b)
    {
        ans = ans + (b % 10) * (1 << c++);
        b /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter only Binary Digit -> ";
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}