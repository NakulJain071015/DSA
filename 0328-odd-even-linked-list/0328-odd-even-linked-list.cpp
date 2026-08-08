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
    ListNode* oddEvenList(ListNode* head) {
        // if(head == NULL || head->next == NULL)return head;    (brute)
        // vector<int>arr;
        // ListNode* odd = head;
        // while(odd != NULL && odd->next != NULL){
        //     arr.push_back(odd->val);
        //     odd = odd->next->next;
        // }
        // if(odd) arr.push_back(odd->val);
        // ListNode* even = head->next;
        //  while(even != NULL && even->next != NULL){
        //     arr.push_back(even->val);
        //     even = even->next->next;
        // }
        // if(even) arr.push_back(even->val);
        // int i = 0;
        // ListNode* temp = head;
        // while(temp != NULL){
        //     temp->val = arr[i];
        //     i++;
        //     temp = temp->next;
        // }
        // return head;

        if(head == NULL || head->next == NULL)return head;
        ListNode* odd = head;
        ListNode* evenHead = head->next;
        ListNode* even = head->next;
        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            even->next = even->next->next;

            odd = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};