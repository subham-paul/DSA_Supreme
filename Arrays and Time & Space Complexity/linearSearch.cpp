#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
};
int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66};
    int size = 6;
    int key = 5;
    if (linearSearch(arr, size, key))
    {
        cout << "Found value"<<endl;
    }
    else
    {
        cout << "Not Found Value"<<endl;
    }
    return 0;
}