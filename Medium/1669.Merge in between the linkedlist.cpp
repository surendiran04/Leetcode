class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        for(int i=0;i<a-1;i++){ //after a-1 iteration temp->next node is the node where need to attach a list2 node
            temp=temp->next; 
        }
        ListNode* temp2=temp->next;
        for(int i=0;i<=b-a;i++){ //the node moved to get the node after b iteration already moved a iteration so only need to move b-a iteration
            temp2=temp2->next;
        }
        temp->next=list2;
        while(list2->next){ //where the list2's next is empty we need merge the node after b iteration
            list2=list2->next;
        }
        list2->next=temp2;
        return list1;
    }
};
