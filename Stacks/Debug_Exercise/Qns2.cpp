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

void nextGreaterElementLeft(vector<int> input, int n){
		vector<int> left(n,-1);
		stack<int> s;
		for(int i=0; i<n; i++){
				if(s.empty()){
						s.push(i);
						continue;
				}
				while(!s.empty() && input[s.top()] < input[i]){
						left[s.top()] = input[i];
						s.pop();
				}
				s.push(i);
		}
}

int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    int size = v.size();
    nextGreaterElementLeft(v, size);
    for(auto a : v){
        cout << a << ", ";
    }
    return 0;
}