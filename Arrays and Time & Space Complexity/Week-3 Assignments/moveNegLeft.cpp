#include <iostream>
using namespace std;
// using Dutch National Flag algo(2 Pointers Approach)
// Time Complexity-> O(n),   Space Complexity-> O(1)
void moveNegetiveLeft(int arr[], int size){
    int low = 0, high = size - 1;
    while (low < high){
        if (arr[low] < 0){
            low++;
        } else if (arr[high] > 0) {
            high--;
        } else {
            swap(arr[low], arr[high]);
        }
    }
}
int main() {
    int arr[] = {1, 2, -3, 4, -5, 6};
    int size = sizeof(arr) / sizeof(int);
    moveNegetiveLeft(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}