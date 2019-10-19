//https://leetcode.com/problems/split-linked-list-in-parts/

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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        ListNode* tmp=root;
        int N=0;
        vector<ListNode*>answer(k,NULL);
        while(tmp){
            N++;
            tmp=tmp->next;
        }
        int ave=N/k,i=0;
        while(i<k&&root)
        {
            int num=ave;
            answer[i]=root;
            if(N%k){
                --N;
                ++num;
            }
            ListNode* p=answer[i];
            while(num)
            {
                --num;
                root=root->next;
                if(num>0)
                    p=p->next;
            }
                p->next=NULL;
            i++;
        }
        return answer;
    }
};
