#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // Sum of full matrix is 45
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
    }
    cout << "Sum of Full matrix is " << sum << endl;

    return 0;
}
// void rowSumArray(int arr[][4], int row, int col)
// {

//     int sum = 0;
//     for (int i = 0; i < row; i++)
//     {

//         for (int j = 0; j < col; j++)
//         {
//             sum += arr[i][j];
//         }
//     }
//     cout << sum << endl;
// }
// int main()
// {
//     /* int arr[3][3];
//     int row = 3;
//     int col = 3;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     } */
//     int arr[5][4] = {
//         {10, 12, 13, 14},
//         {15, 16, 17, 18},
//         {19, 20, 21, 22},
//         {23, 24, 25, 26},
//         {27, 28, 29, 30}};

//     // row-wise print
//     cout << "\nYour current array is: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << "  ";
//         }
//         cout << endl;
//     }
//     int row = 5;
//     int col = 4;
//     cout << "Total Sum is -> ";
//     rowSumArray(arr, row, col);
//     return 0;
// }