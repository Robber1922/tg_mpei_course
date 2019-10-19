//https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* cur = root;
        vector<int> res;
        while(!s.empty()||cur!=NULL){    
            while(cur!=NULL&&cur->left){
                s.push(cur);
                cur=cur->left;
            }

            if(cur==NULL){
                cur=s.top();
                s.pop();
            }

            res.push_back(cur->val);
            cur=cur->right;
        }
        
        return res;
        
    }
};
