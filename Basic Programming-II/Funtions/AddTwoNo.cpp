#include<iostream>
using namespace std;
int addTwoNo(int x, int y){ // Here x and y are PARAMETERS
    return x+y;
}
int main(){
    int a,b;
    cout<<"Enter Two Numbers -> "<<endl;
    cin>>a>>b;
    cout<<addTwoNo(a,b); // Here a and b are ARGUMENTS
    return 0;
}