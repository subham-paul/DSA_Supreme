#include <iostream>
#include <string.h>
using namespace std;
void reverseCharArray(char name[])
{
        int left = 0;
        int right = strlen(name)-1;

        while (left <= right)
        {
            swap(name[left], name[right]);
            left++;
            right--;
        }
}
int main()
{
    char name[100];
    cout<<"Enter name ";
    cin >> name;
    reverseCharArray(name);
    cout << "After reversal process: " << name << endl;
    return 0;
}