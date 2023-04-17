#include <iostream>
using namespace std;

void mergeTwoArray(int *arr, int s, int e) {
    int mid = (s + e) / 2; // finding mid of the array
    int len1 = mid - s + 1; // finding size of left array
    int len2 = e - mid; // finding size of right array

    // assume to Dynamically create arrays named by left and right, for len1 and len2 length
    int* left = new int[len1]; // new Address return, address store by pointer
    int* right = new int[len2];

    // copy values at Left Array
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }
    // copy values at Right Array
    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // merge two sorted array logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2) 
    {
        if (left[leftIndex] < right[rightIndex]) 
        {
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

void mergeSort(int* arr, int s, int e) {
    // Base Case
    // s == e -> Single element
    // s > e -> invalid array
    if (s >= e) return;

    int mid = (s + e) / 2;

    mergeSort(arr, s, mid); // left part sort

    mergeSort(arr, mid + 1, e); // right part sort

    mergeTwoArray(arr, s, e); // merge two sorted arrays
}

int main() {
    int arr[] = {7, 3, 16, 24, 4, 2, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int n = 8;
    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }

    /* same as above output print using auto loop */
    for (auto val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}