#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int maxI = INT_MIN;
    int arr[] = {2, 4, 1, 6, 8, 9, 0, 90};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxI)
        {
            maxI = arr[i];
        }
    }
    cout << maxI << " is the maximum number" << endl;
    return 0;
}