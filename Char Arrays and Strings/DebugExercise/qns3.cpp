#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n) {
    // str is character array and n is the lenght of the character array
    int index = 0;
    for (int i = 0; i < n; i++) {
        // int j;
        for (int j = 0; j < i; j++)
            if (str[i] == str[j])
                str[index++] = str[i];
    }

    return str;
}

int main() {
    char str[] = "madam";
    cout << removeDuplicate(str, 5) << endl;
    return 0;
}