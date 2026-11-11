// LeetCode 203 - Remove Linked List Elements
// Approach: Dummy node simplifies deletion, including deletion of the head.
// Time: O(n) | Space: O(1)
//
// LeetCode supplies the ListNode definition.

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* current = &dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                ListNode* nodeToDelete = current->next;
                current->next = current->next->next;
                delete nodeToDelete;
            } else {
                current = current->next;
            }
        }
        return dummy.next;
    }
};
