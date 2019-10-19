//https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/

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
    int maxAncestorDiff(TreeNode* root) {
        return help(root, 100000, 0);
    }
    
    int help(TreeNode* node, int Min, int Max) {
        if (node == nullptr) return 0;
        if (node->val < Min) Min = node->val;
        if (node->val > Max) Max = node->val;
        int left = help(node->left, Min, Max);
        int right = help(node->right, Min, Max);
        return max(Max - Min, max(left, right));
    }
};
