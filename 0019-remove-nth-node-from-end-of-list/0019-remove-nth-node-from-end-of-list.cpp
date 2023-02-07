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
        
        //finding length
        int len=0;
        ListNode* temp;
       // if(head==NULL)return NULL;
       
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;

        }
        int pos = len-n;
        // if(n==1 and pos==0)return NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        if(pos==0)
        {
           head=head->next;
           curr->next=NULL;
           delete curr;
           return head;
        }
        else{
            int cnt=1;
            while(cnt<=pos)
            {
                prev=curr;
                curr=curr->next;
                cnt++;
            }
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        return head;
    }
};