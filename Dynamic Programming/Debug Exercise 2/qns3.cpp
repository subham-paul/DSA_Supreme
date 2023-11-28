#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCost(vector<vector<int>> &costs) {
        int n = costs.size();
        if (n == 0) {
            return 0;
        }

        int dp[2][3];
        for (int i= 0; i < 3; i++) {
            dp[0][i] = costs[0][i];
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                dp[i&1][j] = INT_MAX;
                for (int k = 0; k < 3; k++) {
                    if (k != j) {
                        dp[i&1][j] = min(dp[i&1][j], dp[i&1^1][k] + costs[i][j]);
                    }
                }
            }
        }
        return min(dp[n&1^1][0], min(dp[n&1^1][1], dp[n&1^1][2]) );
    }

};

int main(){
    
    return 0;
}