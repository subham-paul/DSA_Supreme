#include <iostream>
#include<cmath>
using namespace std;
int decimalToBinary1(int n){
    // Division method
    int bNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n%2;
        bNo = bit*pow(10,i++)+bNo;
        n=n/2;
    }
    return bNo;
}

int decimalToBinary2(int n){
    // Bitwise method
    int bNo = 0;
    int i = 0;
    while (n>0)
    {
        int bit = (n & 1);
        bNo = bit*pow(10,i++)+bNo;
        n = n>>1;
    }
    return bNo;
}
int main() {
    int n;
    cout<<"Enter Decimal Number ->";
    cin>>n;
    // cout<<decimalToBinary1(n)<<endl;
    cout<<decimalToBinary2(n)<<endl;
    return 0;
}