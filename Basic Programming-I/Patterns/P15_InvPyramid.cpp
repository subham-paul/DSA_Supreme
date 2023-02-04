/* Enter row number here-> 5
* * * * *
 * * * *
  * * *
   * 
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
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // Stars
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}