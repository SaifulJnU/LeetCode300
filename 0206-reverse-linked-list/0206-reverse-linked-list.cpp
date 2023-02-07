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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL or head->next == NULL)
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        
        while(curr!=NULL)
        {
            //taking the track
            forward = curr->next;
            
            //reverse linking
            curr->next = prev;
            
            //iterate for samne jete
            prev = curr;
            curr = forward; //curr=curr->next;

        }
        
        return prev;
    }
};