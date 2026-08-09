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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        multiset<int> mpp;
        ListNode* temp = head;
        while(temp != NULL){
            mpp.insert(temp->val);
            temp = temp->next;
        }
        temp = head;
       for(auto x : mpp){
           temp->val = x;
           temp = temp->next;
       }
        return head;
    }
};