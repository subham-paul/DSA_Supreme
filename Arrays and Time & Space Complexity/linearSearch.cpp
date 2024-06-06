#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
};

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66};
    int size = 6;
    int key = 55;
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        cout << "Value found at " << result << " index" << endl;
    } else {
        cout << "Not found";
    }
    return 0;
}