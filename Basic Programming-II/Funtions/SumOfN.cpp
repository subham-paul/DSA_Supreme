#include<iostream>
using namespace std;
int sumOfN(int s){
    int sum = 0;
    for (int i = 0; i <= s; i++)
    {
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number -> ";
    cin>>n;
    cout<<n<<" number Sum is = "<<sumOfN(n);
    return 0;
}