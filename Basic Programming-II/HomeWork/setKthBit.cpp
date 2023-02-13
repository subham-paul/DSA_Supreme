#include<iostream>
using namespace std;
int setKthBit(int N, int K)
    {
        // Write Your Code here
        // int mask = 1 << K;
        // int ans = N | mask;
        // return ans;
        return N | (1<<K);
    }
int main(){
    int n, k;
    cin>>n>>k;
    cout<<setKthBit(n , k)<<endl;
    return 0;
}