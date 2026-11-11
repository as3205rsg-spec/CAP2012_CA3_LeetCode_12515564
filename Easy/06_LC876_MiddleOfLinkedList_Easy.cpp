// LeetCode 876 - Middle of the Linked List
// Approach: Slow and fast pointers. Fast moves twice as quickly as slow.
// Time: O(n) | Space: O(1)
//
// LeetCode supplies the ListNode definition.

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
