#include<bits/stdc++.h>
using namespace std;
bool isArrayInorder(int arr[], int n) {
    if (n == 0 || n == 1)
        return true;
    for (int i = 1; i < n; i++)
        if (arr[i-1] > arr[i])
            return false;
    return true;
}
int main() {
    return 0;
}