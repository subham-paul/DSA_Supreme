#include<iostream>
using namespace std;
struct ListNode {
    int data;
    ListNode *next;
};
ListNode* head;
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
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
                return true;
        }
        
        return false;
    }
};
int main(){
    head = NULL;
    insert(1);
    insert(3);
    insert(4);
    // insert(4);
    // insert(5);

    Solution ob;
    if(ob.hasCycle(head)){
        cout<<"True\n";
    } else{
        cout<<"False\n";
    }
    
    cout << endl;
    return 0;
}