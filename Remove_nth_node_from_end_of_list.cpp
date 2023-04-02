//question link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* cur=head;
        int c=0;
        while(cur!=NULL){
            c++;
            cur=cur->next;
        }
        if(c==1){
            return NULL;
        }
        c=c-n;
        cur=head;
        ListNode* prev=cur;
        
        if(c==0){
            return head->next;
        }
        
        while(c-- && cur!=NULL){
            prev=cur;
            cur=cur->next;
            
        }
        prev->next=cur->next;
       
        return head;
        
    }
};