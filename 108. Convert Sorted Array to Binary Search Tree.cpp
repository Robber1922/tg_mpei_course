//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, nums.size() - 1);
    }
    TreeNode* help(vector<int>& nums, int l, int r) {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = help(nums, l, mid - 1);
        root->right = help(nums, mid + 1, r);
        return root;
        
    }
};
