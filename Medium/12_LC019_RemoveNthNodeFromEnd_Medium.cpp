// LeetCode 19 - Remove Nth Node From End of List
// Approach: Two pointers with a gap of n nodes; use a dummy node for head deletion.
// Time: O(n) | Space: O(1)
//
// LeetCode supplies the ListNode definition.

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* fast = &dummy;
        ListNode* slow = &dummy;

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return dummy.next;
    }
};
