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
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* temp = head;
        int len=0;
        if(head->next==NULL)return NULL;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
            

        }
        
        int pos=len/2;
        
        int cnt=1;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(cnt<=pos)
        {
            prev=curr;
            
            curr=curr->next;
            cnt++;

        }
        
        prev->next=curr->next;
        curr->next= NULL;
        delete curr;
        return head;
        
    }
};