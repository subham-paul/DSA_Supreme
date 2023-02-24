#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {
        {1, 2, 3},  // 6
        {4, 5, 6},  // 15
        {7, 8, 9}}; // 24
    // 12 15 18
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << col << " th Col sum is " << sum << endl;
    }
    return 0;
}