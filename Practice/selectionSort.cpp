#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int minIndex =i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(auto val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}