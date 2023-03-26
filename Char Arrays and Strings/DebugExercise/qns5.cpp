#include <iostream>
using namespace std;
int main() {
    char char_array[] = {'L', 'A', 'K', 'S', 'H', 'A', 'Y'};
    int array_size = sizeof(char_array);
    string j = "";
    cout << array_size << endl;
    for (int i = 0; i < array_size; i++) {
        j = j + char_array[i];
    }
    cout << j << endl;
}