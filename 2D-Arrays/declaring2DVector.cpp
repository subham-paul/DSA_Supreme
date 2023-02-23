#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaring vector of vector, this will work like 2D array
    vector<vector<int>> arr;

    // initializing 3 different vectors
    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6};
    vector<int> c{7, 8, 9};

    // pushing a, b, c vectors in main 2D vector
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    cout << "Output of the Array" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // vector<vector<int> > arr(7, vector<int>(6, 0));

    // vector<vector<int>> arr(5, vector<int>(5, -8));

    /* int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col, -10));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    } */

    // cout << arr[0][2] << endl;
    return 0;
}