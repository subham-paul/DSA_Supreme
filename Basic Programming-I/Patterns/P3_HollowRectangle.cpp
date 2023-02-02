#include <iostream>
using namespace std;
int main()
{
    // Hollow Rectangle
    int rowCount, colCount;
    cout << "Enter RowCount and ColCount here-> ";
    cin >> rowCount >> colCount;

    for (int row = 0; row < rowCount; row++)
    {
        // first row or last row -> print all *
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "* ";
            }
        } else {
            // remainging middle rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < colCount - 2; i++)
            {
                cout << "  ";
            }
            // last column star
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}