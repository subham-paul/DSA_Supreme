/* Enter a number here -> 4
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
 */
#include <iostream>
#include <assert.h>
using namespace std;
int main() {
    int n;
    cout << "Enter a number here -> ";
    cin >> n;
    assert(n <= 9); // assert used to showing error in tech industries
    for (int row = 0; row < n; row++) {
        int s_num_ind = 8 - row;
        int num = row + 1;
        int count_num = num;
        for (int col = 0; col < 17; col++) {
            if (col == s_num_ind && count_num > 0) {
                cout << num;
                s_num_ind += 2;
                count_num--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}