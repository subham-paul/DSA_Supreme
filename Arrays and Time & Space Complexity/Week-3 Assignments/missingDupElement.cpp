#include <iostream>
using namespace std;
void findMissingDuplicate(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 2, 5, 4};
    int size = sizeof(arr) / sizeof(int);
    findMissingDuplicate(arr, size);
    return 0;
}