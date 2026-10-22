
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        int len = 1;

        while (temp->next != NULL) {
            temp = temp->next;
            len++;
        }

        k = k % len;

        if (k == 0)
            return head;

        temp->next = head;  // Connect tail to head

        int steps = len - k;
        temp = head;

        for (int i = 1; i < steps; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;

        return newHead;
    }
};
