#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 9, 2, 6, 4, 1};
    int size = 6;
    int s = 0, e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    cout<<"Reverse array is - ";
    for(auto value:arr){
        cout<<value<<" ";
    }

    return 0;
}