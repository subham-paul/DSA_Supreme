ListNode* middleNode(ListNode* head) {
        ListNode* last = head;
        ListNode* first = head;

        while (first != NULL && first->next != NULL) { //Fix
            last = last->next;
            first = first->next->next;
        }
    
        return last;
    }