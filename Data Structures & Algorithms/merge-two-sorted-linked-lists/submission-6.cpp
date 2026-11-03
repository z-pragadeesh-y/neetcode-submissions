/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    ListNode* temp = list1;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = list2;
     for (ListNode* i=list1;i!=NULL;i=i->next){
            for (ListNode* j=i->next;j!=NULL;j=j->next){
                        if(i->val>j->val){
                            int temp1=i->val;
                            i->val=j->val;
                            j->val=temp1; 
                        }
     }
     }
    return list1;
    }
};
