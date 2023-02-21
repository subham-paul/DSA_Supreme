#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Enter Array limit -> ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array value " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << max << " is a Maximum number." << endl;
    cout << min << " is a Minimum number." << endl;
    return 0;
}