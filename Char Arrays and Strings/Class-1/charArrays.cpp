#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[])
{
        int length = 0;
        int i = 0;

        while (name[i] != '\0')
        {
                length++;
                i++;
        }
        return length;
}

void reverseCharArray(char name[])
{
        int i = 0;
        int n = getLength(name);
        int j = n - 1;

        while (i <= j)
        {
                swap(name[i], name[j]);
                i++;
                j--;
        }
}

void replaceSpaces(char sentence[])
{

        int i = 0;
        int n = strlen(sentence);

        for (int i = 0; i < n; i++)
        {
                if (sentence[i] == ' ')
                {
                        sentence[i] = '@';
                }
        }
}

bool checkPalindrome(char word[])
{
        int i = 0;
        int n = strlen(word);
        int j = n - 1;

        while (i <= j)
        {
                if (word[i] != word[j])
                {
                        return false;
                }
                else
                {
                        i++;
                        j--;
                }
        }
        return true;
}

void convertIntoUpperCase(char arr[])
{
        int n = getLength(arr);

        for (int i = 0; i < n; i++)
        {
                arr[i] = arr[i] - 'a' + 'A';
        }
}

int main()
{
        // char name[100];
        // cout << "Enter your Name " << endl;
        // cin >> name;
        // int n = getLength(name);
        // cout << "Aapka naam: " << name << " hai, Length hai "<<n << endl;

        // char ch[100];
        // ch[0] = 'a';
        // ch[1] = 'b';
        // cin >> ch[2];
        // cout << ch[0] << ch[1] << ch[2] << endl;

        // char name[100];
        // cin >> name;
        // for(int i=0; i<7; i++) {
        //         cout << "index: " << i << " value: " << name[i] << endl;
        // }
        // int value = (int)name[6];
        // cout << "value is : " << value << endl;

        // char arr[100];
        // // getline() is a standard library function that is used to read a string or a line from an input stream
        // cin.getline(arr, 50);
        // cout << arr<<endl;

        // char name[100];
        // cout<<"Enter name ";
        // cin >> name;
        // cout << "length is: " << getLength(name) << endl; // is a custom function
        // cout << "Length is -> " << strlen(name) << endl; // this a pre defined function for find length
        // cout << "Initially: " << name << endl;
        // reverseCharArray(name);
        // cout << "After reversal process: " << name << endl;

        // char sentence[100];
        // cin.getline(sentence, 100);
        // replaceSpaces(sentence);
        // cout << "printing sentence with @ char" << endl << sentence << endl;

        char arr[100] = "abba";
        cout << "plindrome check: " << checkPalindrome(arr);

        // char arr[100] = "subham";
        // convertIntoUpperCase(arr);
        // cout << arr << endl;

        return 0;
}