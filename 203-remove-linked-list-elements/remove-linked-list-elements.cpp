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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        if(head == NULL)
            return nullptr;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        while(curr != NULL){
            ListNode* temp = curr;
            ListNode* nextNode = curr->next;
            if(curr->val == val){
                prev->next = curr->next;
                delete temp;
                
            }
            else
                prev = curr;
            curr = nextNode;
        }
        return dummy->next;
    }
};