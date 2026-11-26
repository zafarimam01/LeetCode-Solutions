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
    ListNode* reverseLL(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* last = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;
        return last;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* rev = reverseLL(slow);

        ListNode* curr = head;
        while(rev->next != NULL){
            ListNode* currNext = curr->next;
            curr->next = rev;
            ListNode* revNext = rev->next;
            rev->next = currNext;

            curr = currNext;
            rev = revNext;
        }
    }
};