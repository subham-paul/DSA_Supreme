// For Extreame Print in an array Like Input = {1,2,3,4,5,6,7,8}   Output = {1,8,2,7,3,6,4,5}
// Here I using 2 pointer approach and print start and end digit of an array

#include <iostream>
using namespace std;
int main(){
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;
    int start = 0;
    int end = size - 1;
    cout << "Input array is -> ";
    for (auto val : arr){
        cout << val << " ";
    }
    cout << endl;
    cout << "Extreme Array is -> ";
    while (start <= end){
        if (start == end){
            cout << arr[start] << " ";
        } else {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }
        start++;
        end--;
    }
    cout << endl;
    return 0;
}