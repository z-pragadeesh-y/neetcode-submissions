/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

class Solution {
    public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    if (list1 == nullptr)
        return list2;

    if (list2 == nullptr)
        return list1;

    

    ListNode* temp = list1;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = list2;

    sort(list1);

    return list1;
}
   void sort(ListNode* list)
{
    for (ListNode* i = list; i != nullptr; i = i->next)
    {
        for (ListNode* j = list; j->next != nullptr; j = j->next)
        {
            if (j->val > j->next->val)
            {
                swap(j->val, j->next->val);
            }
        }
    }
}

};