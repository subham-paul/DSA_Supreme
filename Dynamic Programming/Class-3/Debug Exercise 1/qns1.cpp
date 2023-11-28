#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    int a = 1;
    int b = 1;

    for (int i = 2; i <= n; i++)
    {
        b = a;
        a = a + b;
    }
    return a;
}

int main(){
    
    return 0;
}