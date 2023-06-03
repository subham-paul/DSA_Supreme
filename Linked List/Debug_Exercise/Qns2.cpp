#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode* next;
};

ListNode* head;

//ListNodehead;

void insert(int x) {
    ListNode* temp = new ListNode();
    temp->data = x;
    temp->next = NULL;
    if(head == NULL) {
        head = temp;
    } else {
        ListNode* current = head;
        while(current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

ListNode* middleNode(ListNode *&head) {
        ListNode* last = head->next;
        ListNode* first = head->next->next;

        while (first != NULL && first->next != NULL) {
            last = last->next;
            first = first->next->next;
        }

        return last;
    }

/* oid print() {
    ListNode* temp = head;
    cout << "List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
} */

int main() {
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    ListNode *ans = middleNode(head);
    cout << "Middle Node = " << ans->data << " ";
    cout << endl;
    return 0;
}