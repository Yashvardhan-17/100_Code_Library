//question link: https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        vector<int> a;
        ListNode* cur=head;
        while(cur!=NULL){
           a.push_back(cur->val);
            cur=cur->next;
        }
        
        
        int i=0,j=a.size()-1;
       
        
        while(i<=j){
             if(a[i]!=a[j]){
                 return false;
             }
            i++;
            j--;
        }
        return true;
        
    }
};