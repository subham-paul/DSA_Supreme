#include<iostream>
using namespace std;
int factorial(int n){
    // base case
    if(n==1){
        return 1;
    }
    // int smallProb=factorial(n-1);
    // int bigProb=n*factorial(n-1);
    return n*factorial(n-1);
}
int main(){
    int n=5;
    // cout<<"Enter a number here -> ";
    // cin>>n;
    cout<<factorial(n);
    return 0;
}