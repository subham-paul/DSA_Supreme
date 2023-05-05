#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<float> v = {3.2, 1.9, 9.9, 4.5};
    sort(v.begin(), v.end());
    for(auto i : v) {
        cout << i << endl;
    }
    return 0;
}