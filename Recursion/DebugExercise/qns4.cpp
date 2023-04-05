#include<iostream>
using namespace std;

int rec(char input[],int n){
    if(input[0] == '\0') // Fix
        return n;
    n = n * 10 + input[0] - 48; // Fix
    return rec(input + 1, n);
}

int stringToNumber(char input[]) {
    int n = 0;
    return rec(input,n);
}
int main(){
    char ch[]={'2','9'};
    cout<<stringToNumber(ch)<<endl;
    return 0;
}