#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {11, 2, 3, 44, 55};
    vector<int> brr = {1, 2, 3, 4, 5};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int El = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (El == brr[j])
            {
                brr[j] = -1;
                ans.push_back(El);
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}