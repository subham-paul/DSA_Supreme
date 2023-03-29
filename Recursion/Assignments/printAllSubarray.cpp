#include <iostream>
#include <vector>
using namespace std;

void printSubArrayUtil(vector<int> &nums, int start, int end) {
    // base case
    if (end == nums.size()) {
        return;
    }

    // 1 case solve
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // RE
    printSubArrayUtil(nums, start, end + 1);
    cout << endl;
}

void printSubArray(vector<int> &nums) {
    for (int s = 0; s < nums.size(); s++) {
        int e = s;
        printSubArrayUtil(nums, s, e);
    }
}

int main() {

    // T.C-> O(N*N),  S.C-> O(N)

    vector<int> nums{1, 2, 3, 4, 5};
    printSubArray(nums);

    return 0;
}