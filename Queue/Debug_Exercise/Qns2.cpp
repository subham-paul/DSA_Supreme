#include<bits/stdc++.h>
using namespace std;
int firstUniqChar(string s) {
        vector<int> c(26,0);
        queue<char> q;

        for(auto i:s){
            c[i-'a']++;
            q.push(i);
        }
        
        int idx=0;

        while(!q.empty()){
            auto elem=q.front();
            q.pop();
            
            if(c[elem-'a']==1){
                return idx;
            }else{
                idx++;
            }
        }
        return -1;
    }
int main(){

}