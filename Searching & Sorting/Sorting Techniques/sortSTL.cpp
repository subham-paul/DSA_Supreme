#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v{10, 1, 7, 6, 14, 9, -2, -3};

  sort(v.begin(), v.end());

  // printing Sort using STL Liabrary
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}