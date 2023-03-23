#include <iostream>
using namespace std;

void mergeTwoArray(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // assume to create arrays for len1 and len2 length
    int *left = new int[len1]; // new Address return, address store by pointer
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = 5;

    while (leftIndex < len1 && rightIndex < len2) {

        if (left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy logic for left array
    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy logic for Right array
    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // TODO: delete left and right newly created array
}

void mergeSort(int arr[], int s, int e) {
    // Base Case
    // s == e -> Single element
    // s>e -> invalid array
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // left part sort
    mergeSort(arr, s, mid);

    // right part sort
    mergeSort(arr, mid + 1, e);

    // merge two sorted arrays
    mergeTwoArray(arr, s, e);
}

int main() {
    int arr[] = {7, 3, 2, 16, 24, 4, 11, 9};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 8;
    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}