#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter array limit -> ";
    cin >> n;
    vector<int> arr(n);
    int start = 0, i = 0;
    int end = n - 1;
    cout << "Enter " << n << " numbers input here" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    while (i != end) {
        if (arr[i] == 0) {
            swap(arr[start], arr[i]);
            start++;
            i++;
        } else {
            swap(arr[end], arr[i]);
            end--;
        }
    }
    // print
    cout << "After sorted value ";
    for (auto val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}