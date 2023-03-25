#include <iostream>
using namespace std;
/* int linearSearch(int arr[], int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
} */
bool linearSearch(int arr[], int s, int k)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {5, 9, 2, 6, 4, 1};
    int size = 6;
    int key = 1;
    // cout << linearSearch(arr, size, key);
    if (linearSearch(arr, size, key))
    {
        cout << "Digit found";
    }
    else
    {
        cout << "Not found";
    }

    return 0;
}