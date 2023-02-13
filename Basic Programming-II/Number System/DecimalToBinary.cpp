#include <iostream>
#include<cmath>
using namespace std;
int decimalToBinary1(int n){
    // Division method
    int binaryNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n%2;
        binaryNo = bit*pow(10,i++)+binaryNo;
        n=n/2;
    }
    return binaryNo;
}

int decimalToBinary2(int n){
    // Bitwise method - always use this because computer use binary number
    int binaryNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = (n & 1);
        binaryNo = bit*pow(10,i++)+binaryNo;
        n = n>>1;
    }
    return binaryNo;
}
int main() {
    int n;
    cout<<"Enter Decimal Number -> "; // like 25
    cin>>n;
    // cout<<decimalToBinary1(n)<<endl;
    cout<<decimalToBinary2(n)<<endl;
    return 0;
}