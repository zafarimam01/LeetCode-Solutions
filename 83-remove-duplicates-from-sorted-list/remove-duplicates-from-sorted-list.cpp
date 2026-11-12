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
        if(head == NULL)
            return NULL;
        if(head->next == NULL)
            return head;
        ListNode* curr = head;
        ListNode* sec = head->next;
        while(curr && sec){
            ListNode* third = sec->next;
            
            if(curr->val == sec->val){
                curr->next = third;
            }
            if(curr->val != sec->val)
                curr = sec;
            sec = third;
        }
        return head;
    }
};