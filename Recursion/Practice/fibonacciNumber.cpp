#include <iostream>
using namespace std;
int fibonacci(int n){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;
    
    // recursive case
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n=5;
    cout<<fibonacci(n)<<endl;
    return 0;
}