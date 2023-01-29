#include <iostream>
using namespace std;
int main()
{
    // Solid Rectangle
    /*
     * * * * * *
     * * * * * *
     * * * * * *
     * * * * * *
     */
    int n;
    cout << "Enter Value here-> ";
    cin >> n;
    for (int row = 0; row < n / 2; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}