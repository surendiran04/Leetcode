class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p=head;
        ListNode* q=NULL; //It is preferred to use nullptr instead of NULL which avoids ambiquity associated with NULL
        ListNode* r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }
};
