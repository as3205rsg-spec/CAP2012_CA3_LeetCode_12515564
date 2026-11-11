// LeetCode 25 - Reverse Nodes in k-Group
// Approach: Check that k nodes exist, reverse those links, then continue with the next group.
// Time: O(n) | Space: O(1)
//
// LeetCode supplies the ListNode definition.

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* groupPrevious = &dummy;

        while (true) {
            ListNode* kth = groupPrevious;

            for (int i = 0; i < k && kth != nullptr; i++) {
                kth = kth->next;
            }

            if (kth == nullptr) break;

            ListNode* groupNext = kth->next;
            ListNode* previous = groupNext;
            ListNode* current = groupPrevious->next;

            while (current != groupNext) {
                ListNode* nextNode = current->next;
                current->next = previous;
                previous = current;
                current = nextNode;
            }

            ListNode* oldGroupStart = groupPrevious->next;
            groupPrevious->next = kth;
            groupPrevious = oldGroupStart;
        }

        return dummy.next;
    }
};
