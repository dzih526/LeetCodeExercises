class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* headA = head;
        ListNode* headB = head->next;
        headA->next = NULL;
        while (headB->next != NULL){
        	ListNode* headC = headB->next;
        	headB->next = headA;
        	headA = headB;
        	headB = headC;
        }
        headB->next = headA;
        return headB;
    }
};