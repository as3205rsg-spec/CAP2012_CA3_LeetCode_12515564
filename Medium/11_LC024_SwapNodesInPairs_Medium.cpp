// LeetCode 24 - Swap Nodes in Pairs
// Approach: Dummy node and pointer rewiring; swap adjacent nodes without changing their values.
// Time: O(n) | Space: O(1)
//
// LeetCode supplies the ListNode definition.

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* previous = &dummy;

        while (previous->next != nullptr &&
               previous->next->next != nullptr) {
            ListNode* first = previous->next;
            ListNode* second = first->next;

            first->next = second->next;
            second->next = first;
            previous->next = second;

            previous = first;
        }
        return dummy.next;
    }
};
