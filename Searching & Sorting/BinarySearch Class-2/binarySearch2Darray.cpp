#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target) {
  int s = 0;
  int e = rows * cols - 1;
  int mid;

  while (s <= e) {
    mid = s + (e - s) / 2;
    int rowIndex = mid / cols;
    int colIndex = mid % cols;

    if (arr[rowIndex][colIndex] == target) {
      cout << "Found at Row & Col Index " << rowIndex << ", " << colIndex << endl;
      return true;
    }

    if (arr[rowIndex][colIndex] < target) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return false;
}

int main() {
    int arr[5][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16},
                    {17, 18, 19, 20}}; // 2D array always data stored in memory linearly
  int rows = 5;
  int cols = 4;
  int target = 15;

  bool ans = binarySearch(arr, rows, cols, target);

  if (ans == false) {
    cout << "Not Found Here" << endl;
  }
  return 0;
}