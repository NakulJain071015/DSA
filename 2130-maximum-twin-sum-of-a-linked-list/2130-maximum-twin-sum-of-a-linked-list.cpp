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
    int pairSum(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        int cnt = 0;
        while(curr != NULL){
            cnt++;
            if(cnt == (count/2+1)){
                break;
            }

            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        int res = 0;
        while(curr){
            res = max(res,prev->val + curr->val);
            prev = prev->next;
            curr = curr->next;
        }
        return res;
    }
};