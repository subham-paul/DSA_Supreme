#include <iostream>
using namespace std;
int getLength(char brr[])
{
    int i = 0, length = 0;
    while (brr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{
    char name[100];
    cout << "enter your name ";
    cin >> name;
    cout << "Size is : "<< getLength(name) << endl;
    return 0;
}