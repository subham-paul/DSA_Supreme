#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int minI = INT_MAX;
    int arr[] = {2, 44, 11, 33, 22, 9, 6, 1};
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minI)
        {
            minI = arr[i];
        }
    }
    cout <<"This "<< minI << " this is a minimum number of this array." << endl;
    return 0;
}