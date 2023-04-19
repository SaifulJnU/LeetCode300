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
    
    ListNode* reversetheList(ListNode * head)
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(head!=NULL)
        {
            next = head->next;
            head->next = prev;
            
            prev = head;
            head = next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head == NULL or head->next==NULL)return true;
        
        /*
          we need three steps:
          1. find the middle
          2. from middle to end reverse the list
          3. from head and middile check the equivalent
        */
        
        //find the  middle of the list
        
        ListNode *slow=head;
        ListNode *fast=head->next;
        
        while(fast!=NULL and fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = reversetheList(slow->next);
        slow = slow->next;
        
        while(slow!=NULL)
        {
            if(head->val != slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        
        return true;
    }
};