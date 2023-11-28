#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue {
    int capacity;
    int size;
    Node<T>* head;
    Node<T>* tail;
    public :
    Queue() {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    
    void enqueue(T data) {
        Node<T>* temp = new Node<T>(data);
        if(isEmpty()){
            head = temp;
            tail = head;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        if(size==0){
            return true;
        }
        return false;
    }
    
    T dequeue() {
        if(isEmpty()){
            return 0;
        }
        T data = head->data;
        head = head->next;
        size--;
        return data;
    }
    
    T front()  {
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }
};
int main(){

    return 0;
}