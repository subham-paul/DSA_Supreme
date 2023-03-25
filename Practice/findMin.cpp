#include<iostream>
using namespace std;
int main(){
    int arr[] = {5, 9, 2, 6, 4, 1};
    int size = 6;
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}