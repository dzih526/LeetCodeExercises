class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    	ListNode *l1; l1=headA;
    	ListNode *l2; l2=headB;
    	while (l1!=l2) {
    		l1 = (l1 == NULL) ? headB : l1->next;
    		l2 = (l2 == NULL) ? headA : l2->next;
    	}
    	return l1;
    }
};