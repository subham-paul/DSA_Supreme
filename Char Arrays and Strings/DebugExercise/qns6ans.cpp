#include <iostream>
using namespace std;
void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start;i<j;i++,j--){
	// Fixed swap
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        if((input[i]==' ' || input[i]=='\0')){ // Fix: Need to check if terminating or not
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
        
    }
}
int main(){
    char input[] = "Hello Guyz";
    reverseEachWord(input);
    for (int i = 0; i < 10; i++)
    {
        cout<<input[i];
    }
    
    return 0;
}