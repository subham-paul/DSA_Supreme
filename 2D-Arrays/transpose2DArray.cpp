/* Transpose means Rows becomes Columns & Columns becomes Rows */

#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 12, 13},
        {15, 16, 17},
        {19, 80, 21}};

    // row-wise print
    cout << "\nYour current array is: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr[row][col] << "  ";
        }
        cout << endl;
    }

    cout << "\nArray after transpose: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << arr[col][row] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}