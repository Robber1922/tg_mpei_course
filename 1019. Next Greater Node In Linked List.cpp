//https://leetcode.com/problems/next-greater-node-in-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> s;
        vector<int> res;
        
        int i = 0;
        
        while(head) {
            res.push_back(head->val);
            while(!s.empty() && res[s.top()] < head->val) {
                res[s.top()] = head->val;
                s.pop();
            }
            s.push(i); 
            i++;
            head = head->next;
        }
        
        while(!s.empty()) {
            res[s.top()] = 0;
            s.pop();
        }
        
        return res;
    }
};
