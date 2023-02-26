#include <iostream>
#include <string.h>
using namespace std;
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
int main()
{
    char sentence[100];
    cout << "Enter a Sentence ";
    cin.getline(sentence, 100);
    replaceSpaces(sentence);
    cout << "printing sentence with @ char -> " << sentence << endl;
    return 0;
}