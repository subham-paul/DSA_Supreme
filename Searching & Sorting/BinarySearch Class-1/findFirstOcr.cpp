#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOcc(vector<int> arr, int target) {
  int s = 0;
  int e = arr.size() - 1;
  int ans = -1;

  while (s <= e) {
    int mid = s + (e - s) / 2;
    if (arr[mid] == target) {
      ans = mid; // ans store      
      e = mid - 1; // left search
    } else if (target < arr[mid]) {      
      e = mid - 1; // left me search
    } else if (target > arr[mid]) {      
      s = mid + 1; // right search
    }
  }
  return ans;
}

int main() {
  vector<int> v{1, 3, 3, 4, 4, 6, 7};
  //            0  1  2  3  4  5  6
  int target = 4;

  int ans = firstOcc(v, target);
  cout << "Find ans help of Manual Funtion => " << ans << endl;

  auto ans2 = lower_bound(v.begin(), v.end(), target);
  cout << "Find ans help of LOWER Bound Function => " << ans2 - v.begin() << endl;
  return 0;
}