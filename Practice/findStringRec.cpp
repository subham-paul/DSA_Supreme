#include<iostream>
using namespace std;
bool findString(string s, char k, int n, int i){
    // base case
    if(i>=n)
        return false;

    // 
    if(s[i] == k){
        return true;
    }

    return findString(s, k, n, i+1);
}
int main(){
    string str="subhampaul";
    char key = 'z';
    int size = str.length();
    bool ans = findString(str, key, size, 0);
    cout<<"ANS is -> "<<ans<<endl;
    
    return 0;
}