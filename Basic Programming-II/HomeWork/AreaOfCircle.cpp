#include<iostream>
using namespace std;
int areaOfCircle(float r){
    float area = 0;
    area = 3.14*r*r;
    return area;
}
int main(){
    float n;
    cout<<"Enter the value -> ";
    cin>>n;
    cout<<areaOfCircle(n);
    return 0;
}