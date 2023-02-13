#include <iostream>
#include<vector>
// Find common / Duplicate Elements to mark intersection
using namespace std;
int main() {
    vector<int> arr{1, 2, 3, 3, 4, 6, 8};
    vector<int> brr{3, 3, 4, 10};
    vector<int> ans;

    // outer loop on arr vector
    for (int i = 0; i < arr.size(); i++) {
        int element = arr[i];
        // for every element, run loop on brr
        for (int j = 0; j < brr.size(); j++) {
            if (element == brr[j]) {
                // mark
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    // print ans
    for (auto value : ans) { // Auto used for any kinds Datatype of the array
        cout << value << " ";
    }
    cout << endl;
    return 0;
}