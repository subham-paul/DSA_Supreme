#include <iostream>
#include <vector>
#include <stack>
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
    int x = input.top();
    input.pop();
    reverseStack(input, extra);
    for(int i=0; input.empty(); i++){
        extra.push(input.top());
        input.pop();
    }
    input.push(x);
    for(int i=0; extra.empty(); i++){
        input.push(extra.top());
        extra.pop();
    }
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int size = v.size();
    
    for(auto a : v){
        cout << a << ", ";
    }
    return 0;
}