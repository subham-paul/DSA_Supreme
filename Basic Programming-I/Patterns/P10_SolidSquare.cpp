/* Enter number here -> 3
* * *
* * *
* * *
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number here -> ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}