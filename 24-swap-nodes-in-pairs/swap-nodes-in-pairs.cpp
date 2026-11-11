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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* sec = curr->next;
        ListNode* prev = NULL;
        while(curr != NULL && sec != NULL){
            ListNode* third = sec->next;
            sec->next = curr;
            curr->next = third;

            if(prev != NULL)
                prev->next = sec;
            else
                head = sec;
            
            prev = curr;
            curr = third;
            if(third != NULL)
                sec = third->next;
            else
                sec = NULL;
        }
        return head;
    }
};