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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 1;
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }
        ListNode* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
            n++;
        }
        int newK = k % n;
        int steps = n - newK;
        if(newK == 0){
            return head;
        }
        tail->next = head;
        ListNode* newTail = head;
        for(int i=1; i<steps; i++){
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};