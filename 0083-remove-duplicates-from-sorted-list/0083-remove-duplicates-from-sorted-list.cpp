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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL) return NULL;
        ListNode* temp = head;
        
        while(temp!=NULL)
        {
            if(temp->next!=NULL and temp->val == temp->next->val)
            {
                ListNode* next_next = temp->next->next;
                ListNode* nodetodelete = temp->next;
                
                delete nodetodelete;
                
                temp->next = next_next;
            }
            else{
                temp = temp -> next;
            }

        }
        
        return head;
        
    }
};