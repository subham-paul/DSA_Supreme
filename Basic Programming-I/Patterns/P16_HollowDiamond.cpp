/* 
Enter number here-> 5
***** *****
****   ****
***     ***
**       **
*         *
*         *
**       **
***     ***
****   ****
***** *****
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number here-> ";
    cin >> n;
    // Upper  For Loop
    for (int row = 0; row < n; row++)
    {
        // half Pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        // Full Pyramid With Space
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        // half Pyramid
        for (int col = 0; col < n - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower For Loop
    for (int row = 0; row < n; row++)
    {
        // half Pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        // Full Pyramid With Space
        for (int col = 0; col < 2 * n - 2 * row - 1; col++)
        {
            cout << " ";
        }
        // half Pyramid
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}