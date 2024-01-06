#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},  // 6
        {4, 5, 6},  // 15
        {7, 8, 9}}; // 24
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << row << " th Row sum is " << sum << endl;
    }

    return 0;
}