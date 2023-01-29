#include <iostream>
using namespace std;
int main()
{
    // Half Pyramid
    /*  Enter Value here-> 5
        *
        * *
        * * *
        * * * *
     */
    int n;
    cout << "Enter Value here-> ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}