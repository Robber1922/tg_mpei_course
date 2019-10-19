//https://leetcode.com/problems/binary-tree-right-side-view/

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
    vector<int> rightSideView(TreeNode* root) {
     vector<int> values;
        if (!root) {
            return values;
        }
        queue<TreeNode*> Q;
        Q.push(root);
        while (!Q.empty()) {
            values.push_back(Q.back()->val);
            int n = Q.size();
            for (int i = 0; i < n; ++i) {
                auto a = Q.front(); Q.pop();
                if (a->left) {
                    Q.push(a->left);
                }
                if (a->right) {
                    Q.push(a->right);
                }
            }
        }
        return values;
    }
};
