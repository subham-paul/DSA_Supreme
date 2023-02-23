#include <iostream>
using namespace std;
void printRowArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout << "Enter 3,3 2D array input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j][i];
        }
    }
    printRowArray(arr, row, col);
}