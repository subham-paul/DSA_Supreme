#include<iostream>
#include<vector>
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

void nextGreaterElementRight(vector<int> input, int n){
		vector<int> right(n,-1);
		stack<int> s;
		for(int i=0; i<n; i++){
				if(s.empty()){
						s.push(i);
						continue;
				}
				while(!s.empty() && input[s.top()] < input[i]){
						right[s.top()] = input[i];
						s.pop();
				}
				s.push(i);
		}
}

int main(){
    Stack s(10);
    // Insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    nextGreaterElementRight(s, 10)
    return 0;
}