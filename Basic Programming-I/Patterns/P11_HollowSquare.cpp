/* Enter number here-> 5
 * * * * *
 *       *
 *       *
 *       *
 * * * * *
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number here-> ";
    cin >> n;
    /* for (int row = 0; row < n; row++)
    {
        if (row == 0 || row == n - 1)
        {
            for (int col = 0; col < n; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int col = 0; col < n - 2; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    } */
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}