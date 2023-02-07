#include<iostream>
using namespace std;
void findEvenOdd(int x){
    if(x%2 == 0){
        cout<<"Even Number";
    } else {
        cout<<"Odd Number";
    }
}
int main(){
    int n;
    cout<<"Enter a number here -> ";
    cin>>n;
    findEvenOdd(n);
    return 0;
}