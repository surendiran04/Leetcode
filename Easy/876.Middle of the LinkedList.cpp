class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){ //when the fast reaches the lastnode, the slow will be only half of it
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};
