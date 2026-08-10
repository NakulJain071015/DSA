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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* a = headA;
        ListNode* tempA = headA;
        ListNode* b = headB;
        ListNode* tempB = headB;
        int cntA = 0;
        int cntB = 0;

        while (a != NULL) {
            cntA++;
            a = a->next;
        }

        while (b != NULL) {
            cntB++;
            b = b->next;
        }

        if (cntA > cntB) {
            int k = cntA - cntB;
            for (int i = 0; i < k; i++) {
                tempA = tempA->next;
            }

        }

        else if (cntB > cntA) {
            int k = cntB - cntA;
            for (int i = 0; i < k; i++) {
                tempB = tempB->next;
            }
        }

        while (tempA != NULL && tempB != NULL) {
            if (tempA == tempB) {
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};