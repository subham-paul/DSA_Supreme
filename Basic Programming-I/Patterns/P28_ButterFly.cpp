/*
Enter a number here -> 5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
 */

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number here -> ";
    cin >> n;
    for (int i = 0; i < 2 * n; i++) // for printing Row
    {
        int cond = i < n ? i : n + (n - i - 1);
        int space_count = i < n ? 2 * (n - cond - 1) : i - cond - 1;
        for (int j = 0; j < 2 * n; j++) // for printing Col
        {
            if (j <= cond)
            {
                cout << "*";
            }
            else if (space_count > 0)
            {
                cout << " ";
                space_count--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}