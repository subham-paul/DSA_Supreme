#include<iostream>
using namespace std;
int multiplyNumbers(int m, int n) {
    if(n <= 0)
        return 0;
    return m + multiplyNumbers(m,n-1);
}
int main(){
    cout<<multiplyNumbers(5,4)<<endl;
    return 0;
}