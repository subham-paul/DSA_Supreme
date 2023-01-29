#include <iostream>
using namespace std;
int main()
{
    // Hollow Rectangle

    int rowCount, colCount;
    cout << "Enter rowCount and colCount here-> ";
    cin >> rowCount >> colCount;
    for (int row = 0; row < rowCount; row++)
    {
        if (row == 0 || row == rowCount - 1)
        {
            for (int col = 0; col < colCount; col++)
            {
                cout << "*";
            }
        }
        else{
            cout << "* ";
            for (int i = 0; i < 3; i++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}