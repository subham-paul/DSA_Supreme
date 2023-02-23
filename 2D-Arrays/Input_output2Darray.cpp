#include <iostream>
#include <vector>
using namespace std;
void printArray(vector<vector<int>> arr)
{
    cout << "Output of the array: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    cout << "Enter the elements in the array: " << endl;
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr);
}