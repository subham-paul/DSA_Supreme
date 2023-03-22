#include<iostream>
using namespace std;
void printNumbers(int n) {
    // base case
    if(n==0){
        return;
    }
    // This is the -> Head Recursion
    // Recursive Relation
    printNumbers(n-1);
    // Processing
    cout<<n<<" ";
}

int main(){
    int n = 5;
    printNumbers(n);
    cout<<endl;
    return 0;
}