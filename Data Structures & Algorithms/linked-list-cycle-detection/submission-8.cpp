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
    bool hasCycle(ListNode* head) {
        ListNode* temp=head;
        vector<ListNode*>visited;
        while(temp!=NULL){

            if(find(begin(visited),end(visited),temp)!=end(visited))    {

            return true;
           
        }
         visited.push_back(temp);
            temp=temp->next;

        
    }
    return false;}
};
