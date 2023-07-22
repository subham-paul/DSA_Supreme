#include<iostream>
using namespace std;
template <typename T>
class Stack {
    Node<T> *head;
    int size;

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
        T data = head->data;
        head = head->next;
        size--;
        return data;   
    }
    
    T top() {
        return head->data;
    }    
};
int main(){

    return 0;
}