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
ListNode* getKthNode(ListNode* temp, int k){
    int cnt = 1;
    while(temp != NULL){
        if(cnt == k){
            break;
        }
        temp = temp->next;
        cnt++;
    }
    return temp;
}
ListNode *reverseLL(ListNode *head)
{ 
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *temp = head;
    ListNode *prev = NULL;
    while (temp != NULL)
    {
        ListNode *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* nextNode;
        ListNode* prevNode;
        ListNode* kth;
        while(temp != NULL){
            kth = getKthNode(temp,k);
            if(kth == NULL){
                if(prevNode) prevNode->next = temp;
                break;
            }
            nextNode = kth->next;
            kth->next = NULL;
            reverseLL(temp);

            if(temp == head){
                head = kth;
            }
            else{
                prevNode->next = kth;

            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};