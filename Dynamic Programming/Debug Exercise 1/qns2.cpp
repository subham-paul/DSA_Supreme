#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int jump(vector<int> &nums)
    {

        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] + i;
        }

        int curr = 0;
        int jumps = 0;

        while (curr <= nums.size() - 1)
        {
            jumps++;
            curr = nums[curr];
        }

        return jumps;
    }
};

int main()
{

    return 0;
}