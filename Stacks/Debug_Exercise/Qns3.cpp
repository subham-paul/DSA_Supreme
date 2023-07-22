#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    vector<int> elements;
    int *arr;
    int top; // To access top element
    int size;
    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1; // As 0 is valid index and -1 is not valid and will help in empty stack
    }
    // Functions
    void push(int element) {
   	 // Add element to vector	
        elements.push_back(element);
    }
};

void reverseStack(stack<int> &input, stack<int> &extra) {
	if(input.empty()){
        return;
    }
    int x = input.top();
    input.pop();
    reverseStack(input,extra);
    for(int i=0; input.empty()==false; i++){
        extra.push(input.top());
        input.pop();
    }
    input.push(x);
    for(int i=0; extra.empty()==false; i++){
        input.push(extra.top());
        extra.pop();
    }
    return;
}

int main(){
    stack<int> s;
    stack<int> s1;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    reverseStack(s, s1);

    for (int i = 0; i < 5; i++) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}