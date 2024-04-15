#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();

    // insertion sort
    for (int round = 1; round < n; round++) {
        int val = arr[round]; // Step A - Fetch
        int j = round - 1; // Step B: Compare
        for (; j >= 0; j--) {
            if (arr[j] > val) {
                arr[j + 1] = arr[j]; // Step C: Shift
            } else {
                // rukna hai
                break;
            }
        }

        arr[j + 1] = val; // step D: Copy
    }

    // printing
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}