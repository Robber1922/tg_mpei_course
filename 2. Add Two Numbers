//https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1   && !l2 )  return NULL;
        
		vector<int> vec1,vec2;
        
        while (l1!=NULL){
            vec1.push_back(l1->val);
            l1=l1->next;
        }
        while (l2!=NULL){
            vec2.push_back(l2->val);
            l2=l2->next;
        }
        
        l1=new ListNode(0);
        l2=l1;
        int sum=0;
        for (int i=0; i<min(vec1.size(),vec2.size());i++){
            sum += vec1[i]+vec2[i];
            l1->next = new ListNode(sum%10);
			l1 = l1->next;
            sum /= 10;
        }
        
        if (vec1.size()>vec2.size()){
            for (int i=vec2.size();i<vec1.size();i++){
                sum += vec1[i];
                l1->next = new ListNode(sum%10);
			    l1 = l1->next;
                sum /= 10;
            }
        }else{
            for (int i=vec1.size();i<vec2.size();i++){
                sum += vec2[i];
                l1->next = new ListNode(sum%10);
			    l1 = l1->next;
                sum /= 10;
            }
        }
        if (sum>0){
            l1->next = new ListNode(sum%10);
        }
	return l2->next;
    }
};
