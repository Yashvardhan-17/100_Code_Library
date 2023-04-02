//question link : https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

//solution:
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur=new TreeNode;
        cur=root;
        while(cur!=NULL)
        {
            if(cur->val>max(p->val,q->val))
            {
                cur=cur->left;
            }
            else if(cur->val<min(p->val,q->val))
            {
                cur=cur->right;
            }
            else 
            {
                  return cur;      
            }
                    

        }
        return root;
        
    }
};