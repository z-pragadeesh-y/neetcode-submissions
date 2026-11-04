class Solution {
public:

    // Reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    // Count nodes
    int count(ListNode* head) {
        int c = 0;

        while (head != NULL) {
            c++;
            head = head->next;
        }

        return c;
    }

    // Merge two lists by concatenation
    ListNode* merge(ListNode* head, ListNode* second) {
        if (head == NULL) return second;
        if (second == NULL) return head;

        ListNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = second;

        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        int c = count(head);

        ListNode* result = NULL;
        ListNode* tail = NULL;

        while (c >= k) {

            ListNode* temp = head;

            // Find the kth node
            for (int i = 1; i < k; i++) {
                temp = temp->next;
            }

            // Separate the remaining list
            ListNode* second = temp->next;
            ListNode* groupTail = head;

            temp->next = NULL;

            // Reverse current group
            head = reverse(head);

            // Merge with result
            if (result == NULL) {
                result = head;
            }
            else {
                tail->next = head;
            }

            // Original first node becomes the tail
            tail = groupTail;

            // Move to next group
            head = second;
            c -= k;
        }

        // Attach remaining nodes without reversing
        if (tail != NULL) {
            tail->next = head;
        }

        return result;
    }
};