class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode node=ListNode(0, head);
        unordered_map<int, ListNode*> mp;
        int prefix=0;
        for(ListNode* ptr=&node; ptr; ptr=ptr->next){ //the node is added if the prefix(key) is not present orelse replaced by the last occured node 
            prefix+=(ptr->val);
            mp[prefix]=ptr;
        }
        prefix=0;//reset
        for(ListNode* ptr=&node; ptr; ptr=ptr->next){ //to order the exact order of list which will be swaped in the map due to the key's value
            prefix+=(ptr->val);
            ptr->next=mp[prefix]->next;
        }
        return node.next;//node is the dummy value node.next have the real head'node
    }
};
