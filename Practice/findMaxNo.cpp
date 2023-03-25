#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 9, 2, 6, 4, 1};
    int size = 6;
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}