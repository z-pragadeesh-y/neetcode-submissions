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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        vector<int> t;
        
        // 1. Gather all values from the lists
        for(int i = 0; i < n; i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                t.push_back(temp->val);
                temp = temp->next;
            }
        }

        // Safeguard for empty inputs
        if (t.empty()) return nullptr;

        // 2. Rebuild the single unsorted linked list
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        for(int i = 0; i < t.size(); i++){
            ListNode *newnode = new ListNode(t[i]);
            if(head == nullptr){
                head = newnode;
                tail = newnode;
            }
            else {
                tail->next = newnode;
                tail = tail->next;
            }
        }
        
        // 3. Two-Loop Bubble Sort using explicit ListNode* structures (i and j)
        // 'i' acts as the shrinking right-side boundary marker
        for (ListNode* i = nullptr; i != head->next; ) {
            ListNode* last_swapped = head;
            bool swapped = false; // Simple flag to detect if any swap happened
            
            // Inner loop: processes unsorted pairs up to the boundary 'i'
            for (ListNode* j = head; j->next != i; j = j->next) {
                if (j->val > j->next->val) {
                    // Swap values
                    int temp = j->val;
                    j->val = j->next->val;
                    j->next->val = temp;
                    
                    last_swapped = j->next; // Remember the furthest swap point
                    swapped = true;
                }
            }
            
            // If no elements were swapped during this pass, the entire list is sorted!
            if (!swapped) {
                break;
            }

            i = last_swapped; // Shrink the boundary up to the last swapped node
        }
       
        return head;
    }
};
