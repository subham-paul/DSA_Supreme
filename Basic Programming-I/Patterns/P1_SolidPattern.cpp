#include <iostream>
using namespace std;
int main()
{
    // Solid Pattern
    /*
     * * * * * *
     * * * * * *
     * * * * * *
     * * * * * *
     */
    int n;
    cout<<"Enter Value here-> ";
    cin>>n;
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