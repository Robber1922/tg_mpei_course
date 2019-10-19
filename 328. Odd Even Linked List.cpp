//https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* Head1 = new ListNode(-1);
		ListNode* Head2 = new ListNode(-1);
		ListNode *subNode1 = Head1, *subNode2 = Head2;

		int index = 0;
		while (head) {

			if (index % 2 == 0) {
				subNode1->next = head;
				subNode1 = subNode1->next;
			}
			else {
				subNode2->next = head;
				subNode2 = subNode2->next;
			}

			index++;
			head = head->next;
		}

		subNode2->next = NULL;
		subNode1->next = Head2->next;
		return Head1->next;
    }
};
