class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) {
            return NULL; // Empty list
        }
        // Initialize two pointers: fast and slow
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = NULL;

        // Move fast pointer n steps ahead
        for (int i = 0; i < n; i++) {
            if (fast == NULL) {
                return head; // Invalid n (greater than list size)
            }
            fast = fast->next;
        }
        // Move both pointers until fast reaches the end
        while (fast != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        // Remove the nth node
        if (prev == NULL) {
            // If the head node needs to be removed
            head = head->next;
        } else {
            prev->next = slow->next;
        }
        delete slow; // Delete the nth node
        return head;
    }
};
