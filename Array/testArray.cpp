#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 3, 1, 7, 0, 4};
    int n = 6;
    sort(arr, arr + n);
    cout << "Here is the sorted array -> ";
    for (int loop = 0; loop < n; loop++)
    {
        cout << arr[loop] << " ";
    } 
    return 0;
}