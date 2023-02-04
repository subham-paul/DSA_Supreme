/* Enter row number here-> 6
     *
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter row number here-> ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        // Space
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // Stars
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}