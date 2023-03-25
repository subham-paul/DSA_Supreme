#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // Sum of full matrix is 45
    int sum = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
    }
    cout << "Sum of Full matrix is " << sum << endl;

    return 0;
}