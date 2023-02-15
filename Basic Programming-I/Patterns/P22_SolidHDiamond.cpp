/* Enter a Number here -> 5
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a Number here -> ";
    cin >> n;
    for (int row = 0; row < 2 * n - 1; row++) {
        int cond = row < n ? row : n - (row % n) - 2;
        for (int col = 0; col < cond + 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}