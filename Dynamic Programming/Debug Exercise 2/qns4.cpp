#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isUgly(int n) {
        if(n < 1)
            return false;
        int temp = n;
        while(n != 1){
            if(n % 2 == 0)
                n /= 2;
            else if(n % 3 == 0)
                n /= 3;
            else if(n % 5 == 0)
                n /= 5;
            if(temp == n)
                return false;
            temp = n;
        }
        return true;
    }
};

int main(){
    
    return 0;
}