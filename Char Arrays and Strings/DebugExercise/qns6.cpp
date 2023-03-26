#include <iostream>
using namespace std;
void reverseString(char input[], int n, int start){
    for (int i = start, j = n - 1 + start; i < j; i++, j--){
        int temp = input[i];
        input[j] = input[i];
        input[i] = temp;
    }
}

void reverseEachWord(char input[]){
    int start = 0, count = 1, i = 0;
    while (input[i] != 0){
        i++;
        count++;
        if ((input[i] == ' ')){
            reverseString(input, count - 1, start);
            start = i + 1;
            count = 0;
        }
    }
}

int main(){
    char str[] = "Hello Guyz";
    reverseEachWord(str);
    for (int i = 0; i < 10; i++)
    {
        cout<<str[i];
    }
    return 0;
}