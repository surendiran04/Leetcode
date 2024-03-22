class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* p=head;
        ListNode* q=NULL;
        ListNode* r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        ListNode* temp2=head;
        while(temp2 != nullptr && q!= nullptr){
            if(temp2->val != q->val){
                return false;
            }
            temp2=temp2->next;
            q=q->next;
        }
        return true;

    }
};
//stack approach
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp && temp->val ==st.top()){
            st.pop();
            temp=temp->next;
        }
        return temp==nullptr;
    }
};
