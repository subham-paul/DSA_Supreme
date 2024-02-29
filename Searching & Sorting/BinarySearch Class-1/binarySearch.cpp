#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target) {
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    int element = arr[mid];
    if (element == target) { // element found, then return index
      return mid;
    }
    if (target < element) {
      end = mid - 1; // search in left side
    } else {
      start = mid + 1; // search in right side
    }
    mid = start + (end - start) / 2;
  }
  return -1; // element not found
}

int main() {
  // int arr[] = {2, 4, 6, 8, 10, 12, 16};
  // int size = 7;
  // int target = 20;

  // int indexOftarget = binarySearch(arr, size, target);

  // if(indexOftarget == -1) {
  //   cout << "target not found" << endl;
  // } else  {
  //   cout << "target found at " << indexOftarget <<" index " << endl;
  // }

  vector<int> v{1, 2, 3, 4, 5, 6};
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int size = 7;

  if (binary_search(arr, arr + size, 7)) {
    cout << "Found" << endl;
  } else {
    cout << "Not found. " << endl;
  }

  return 0;
}