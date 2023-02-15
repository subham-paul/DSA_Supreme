/* Enter number here-> 5
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number here-> ";
    cin >> n;
    /* for (int row = 0; row < n; row++) {
        int col;
        for (col = 0; col < row + 1; col++) {
            cout << col+1;
            
        }
        col=col-1;
        // reverse
        for (; col >=1; col--)
        {
            cout<<col;
        }
        cout << endl;
    }
     */

    for (int row = 0; row < n; row++) {
        int col;
        for (col = 0; col < row + 1; col++) {
            int ans = col+1;
            char ch = ans+'A'-1;
            cout<<ch;
        }
        col=col-1;
        // reverse
        for (; col >=1; col--)
        {
            int ans = col;
            char ch = ans+'A'-1;
            cout<<ch; 
        }
        cout << endl;
    }
    
    return 0;
}