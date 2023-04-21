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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(); //this for storing ans and getting head
        ListNode* temp = dummy;  //this is for  iterating
        
        int carry = 0;
        while(l1!=NULL or l2!=NULL or carry!=0)
        {
            int sum = 0;
            //adding sum from list 1
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            //adding sum from list 2
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
        //adding carry to sum    
        sum+=carry;
        //getting carry
        carry = sum/10;
        //creating a new node for storing a single addition
        ListNode* node = new ListNode(sum%10);  //sum%10 will give the actual number
        //linking new node to my list called temp
        temp->next = node;
        temp = temp->next;
            
        }
        
        return dummy->next;
    }
};