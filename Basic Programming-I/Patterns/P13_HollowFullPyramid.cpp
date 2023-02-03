/*
Enter the number here-> 10
                  *
                *   *
              *       *
            *           *
          *               *
        *                   *
      *                       *
    *                           *
  *                               *
* * * * * * * * * * * * * * * * * * *
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number here-> ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int space = 0;
        for (int col = 0; col < ((2 * n) - 1); col++)
        {
            if (col < n - row - 1)
            {
                cout << "  ";
            }
            else if (space < 2 * row + 1)
            {
                if (space == 0 || space == 2 * row || row == n - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
                space++;
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