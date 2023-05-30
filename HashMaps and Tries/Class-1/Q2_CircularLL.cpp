/* #include <iostream>
#include <unordered_map> */
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
bool isCircular(Node* head){
    unordered_map<Node*, bool> val;
    Node* temp = head;
    while(temp != NULL){
        if(val.find(temp) != val.end()){
            val[temp] = true;
        } else {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
Node *newNode(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main(){
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);

    isCircular(head)? cout << "Yes\n" : cout << "No\n" ;

    // Making linked list circular
    head->next->next->next->next = head;

    isCircular(head)? cout << "Yes\n" : cout << "No\n" ;
    return 0;
}