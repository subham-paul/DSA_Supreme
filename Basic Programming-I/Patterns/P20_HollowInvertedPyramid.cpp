/* Enter a number -> 5
1 2 3 4 5
2     5
3   5
4 5
5
 */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number -> ";
    cin >> n;
    for (int row = 0; row < n; row++) {
        for (int col = row + 1; col <= n; col++) {
            if (row == 0 || col == row + 1 || col == n) {
                cout << col<<" ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}