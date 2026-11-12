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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* smp = small;
        ListNode* lgp = large;
        while(head != NULL){
            if(head->val < x){
                smp->next = head;
                smp = smp->next;
            }
            else{
                lgp->next = head;
                lgp = lgp->next;
            }
            head = head->next;
        }
        smp->next = large->next;
        lgp->next = NULL;
        return small->next;
    }
};