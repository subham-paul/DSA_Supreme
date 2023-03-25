#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,0,0,0,1,1,1,1,1,1};
    int zeros =0;
    int ones=0;
    for (int i = 0; i < 10; i++){
        if(arr[i]== 0){
            zeros++;
        }
        if(arr[i]== 1){
            ones++;
        }
    }
    cout<<"Total Zeros = "<<zeros<<endl;
    cout<<"Total Ones = "<<ones<<endl;
    return 0;
}