class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
     if (head == NULL || head->next==NULL) {
            return head; // Empty list
        }
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL){
            if(fast->val==slow->val){ //if both the values are equal then slow skips that node
                slow->next=fast->next;
                delete fast; //that 2nd repeated node will'be deleted
                fast=slow->next; //fast pointing to the next node of slow
            }
            else{
                slow=slow->next;
                fast=fast->next;
            }
        }
        return head;
    }
};
