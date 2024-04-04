#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr{5, 4, 3, 2, 1, -5, -2}; // worst case Time Complexity- O(n^2),  Space Complexity- O(1)
    int n = arr.size();
    // selection sort
    // outer loop -> (n-1) rounds
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        // inner Loop -> index of minimum element in range i->n
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                // new minimum, then store
                minIndex = j;
            }
        }
        // swap
        swap(arr[i], arr[minIndex]);
    }

    // printing output
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (auto val : arr) {
        cout << val << ", ";
    }
    cout << endl;
    return 0;
}