#include <iostream>
using namespace std;
int main()
{
    // full pyramid using *
/*  Enter number of rows: 6
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
 */
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 1, k = 0; i <= rows; i++, k = 0)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            cout << "  ";
        }
        while (k != 2 * i - 1)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
    }
    return 0;
}