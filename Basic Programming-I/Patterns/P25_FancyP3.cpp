/* Enter a number -> 5
1
121
12321
121
1
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number -> ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        int cond = row <= n / 2 ? 2 * row : 2 * (n - row - 1);
        for (int col = 0; col < cond + 1; col++)
        {
            if (col <= cond / 2)
            {
                cout << col + 1;
            }
            else
            {
                cout << cond - col + 1;
            }
        }
        cout << endl;
    }

    return 0;
}