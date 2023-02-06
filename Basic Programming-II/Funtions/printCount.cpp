#include<iostream>
using namespace std;
void countNumber(int x){ // x is  Parameter
    for (int i = 0; i < x; i++)
    {
        cout<<i+1<<", ";
    }
}
int main(){
    int n;
    cout<<"Enter a digit here -> ";
    cin>>n;
    countNumber(n); // n is Argument
    return 0;
}