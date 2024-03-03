#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lastOcc(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size() - 1;

  int mid = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (arr[mid] == target) {
      ans = mid; // ans store
      s = mid + 1; // right search
    } else if (target < arr[mid]) {
      e = mid - 1; // left search
    } else if (target > arr[mid]) {
      s = mid + 1; // right search
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  vector<int> v{1, 3, 7, 7, 7, 9};
  //            0  1  2  3  4  5
  int target = 7;

  int ans = lastOcc(v, target);
  cout << "Last occurence is at " << ans << endl;

  auto ans2 = upper_bound(v.begin(), v.end(), target);
  cout << "Find ans help of UPPER Bound Function => " << (ans2 - v.begin() - 1)<< endl;

  return 0;
}