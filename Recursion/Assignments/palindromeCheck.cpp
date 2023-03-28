#include <iostream>
using namespace std;
bool checkPalindrome(string &str, int s, int e){
    // base case 
    if(s>=e){
        return true;
    }
    // One case solve
    if(str[s] != str[e]){
        return false;
    }
    // RE
    return checkPalindrome(str, s+1, e-1);
}
int main(){
    // T.C= O(n), S.C= O(n)
    string str = "racecar";
    cout<<checkPalindrome(str, 0, str.size()-1)<<endl;
    
    return 0;
}