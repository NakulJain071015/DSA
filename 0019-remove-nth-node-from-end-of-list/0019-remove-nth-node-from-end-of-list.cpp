/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int sizeOfLL(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL || head->next == NULL)
            return NULL;

        int size = sizeOfLL(head);
        int k = size - n + 1;
        if (k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        int cnt = 0;
        while (temp != NULL) {
            if (cnt == k - 1) {
                prev->next = temp->next;
                delete temp;
                break;
            }
            cnt++;
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
};