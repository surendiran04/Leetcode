class Solution { //this condition failed more nearly 20 cases
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
//array approach - more faster than the other 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> st;
        ListNode* temp=head;
        while(temp){
            st.push_back(temp->val);
            temp=temp->next;
        }
        int n=st.size()-1,j=0;
        for(int i=n;i>=0;i--){
            if(st[i]!=st[j]){ //initially checked with head->val,slightly slower
                return false;
            }
            j++;
        }
        return true;;
    }
};
//reversing the second half and checking with the first half - more faster and uses less space
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return true;

        ListNode* slow = head;
        ListNode* fast = head;

        // Find the middle of the list
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        while (curr != nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Compare the first half and the reversed second half
        ListNode* p1 = head;
        ListNode* p2 = prev;
        while (p2 != nullptr) {
            if (p1->val != p2->val)
                return false;
            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
    };
