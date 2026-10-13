
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0, head);
        ListNode* t1 = &dummy;

        while (t1->next != nullptr && t1->next->next != nullptr) {
            ListNode* first = t1->next;
            ListNode* second = first->next;

            first->next = second->next;
            second->next = first;
            t1->next = second;

            t1 = first;
        }

        return dummy.next;
    }
};
