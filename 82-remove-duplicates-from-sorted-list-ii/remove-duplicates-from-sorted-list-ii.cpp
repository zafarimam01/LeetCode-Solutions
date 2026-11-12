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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        if(head->next == NULL)
            return head;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            ListNode* sec = curr->next;
            if(sec && curr->val == sec->val){
                while(sec != NULL && curr->val == sec->val){
                    sec = sec->next;
                }
                if(prev == NULL){
                    head = sec;
                }
                else
                    prev->next = sec;
                curr = sec;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};