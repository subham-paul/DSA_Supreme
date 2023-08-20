#include<iostream>
using namespace std;
template <typename T>
class Stack {
    Node<T> *head;
    int size;		// number of elements prsent in stack
    public :
    Stack() {
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return head == NULL;
    }
    
    void push(T element) {
        Node<T>* temp = new Node<T>(element);
        temp->next = head;
        head = temp;
        size++;
        return;
    }
    
    T pop() {
        if(size==0){
            return 0;
        }
        T data = head->data;
        head = head->next;
        size--;
        return data;
        
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(size==0){
            return 0;
        }
        return head->data;
    }
};
int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    for (int i = 0; i < 5; i++) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}