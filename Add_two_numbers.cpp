//question link: https://leetcode.com/problems/add-two-numbers/

//solution:
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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
     ListNode* dummyHead=new ListNode(0);
        ListNode* cur=dummyHead;
        int r;
        int carry=0,x,y;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            x=l1?l1->val:0;
            y=l2?l2->val:0;
            int sum=x+y+carry;
            if(sum>9)
            {
                r=sum%10;
                cur->next=new ListNode(r);
                cur=cur->next;
                
            }
            else
            {
                cur->next=new ListNode(sum);
                cur=cur->next;
            }
            carry=sum/10;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
            
        }
        return dummyHead->next;
        
    }
};