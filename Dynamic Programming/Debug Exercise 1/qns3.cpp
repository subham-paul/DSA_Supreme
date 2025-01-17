#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int answer = 0;
        vector<int> dp(n, 1);
        for(int i=0; i<n; i++){
            for(int j=i-1; j>=0; j--){
                if(dp[i] > dp[j])
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        return dp[n-1];
    }
};

int main(){
    
    return 0;
}