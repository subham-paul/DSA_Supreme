#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWays(int n, int k) {
	vector<int> dp(3,0);
        dp[0]=1;
        for(int i=1;i<n;i++){
            if(i==1)
                dp[1]=k;
            else
                dp[i%3]=(dp[(i-2)%3]+dp[(i-1)%3])*(k-1);            
        }
        return dp[(n-1)%3]*k;
    }
};

int main(){
    
    return 0;
}