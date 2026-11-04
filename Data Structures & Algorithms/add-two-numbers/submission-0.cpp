class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;

        ListNode* temp = l1;
        ListNode* temp1 = l2;

        int carry = 0;

        while (temp != NULL || temp1 != NULL || carry != 0) {

            int a = (temp != NULL) ? temp->val : 0;
            int b = (temp1 != NULL) ? temp1->val : 0;

            int sum = a + b + carry;

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);

            if (head == NULL) {
                head = node;
                tail = node;
            }
            else {
                tail->next = node;
                tail = node;
            }

            if (temp != NULL)
                temp = temp->next;

            if (temp1 != NULL)
                temp1 = temp1->next;
        }

        return head;
    }
};