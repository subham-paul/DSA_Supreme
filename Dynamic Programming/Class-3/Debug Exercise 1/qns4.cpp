#include <bits/stdc++.h>
using namespace std;
int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, INT_MAX));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                dp[i+1][j+1] = min(dp[i][j+1], dp[i+1][j]) + grid[i][j];
            }
        }
        return dp[m][n];
    }

int main(){
    
    return 0;
}