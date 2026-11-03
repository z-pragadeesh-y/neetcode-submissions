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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp !=NULL){
            c++;
            temp=temp->next;
        }
        int target=c-n;
        
          if (target == 0) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        temp=head;
        
         while(temp->next!=NULL && target!=1){
            temp=temp->next;
            target--;
         }
       ListNode* del= temp->next;
       temp->next=del->next;
       delete del;
        return head;

    }
};
