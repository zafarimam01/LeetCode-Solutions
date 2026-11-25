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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* read = head->next;
        ListNode* write = head;
        while(read != NULL){
            if(read->val != 0){
                sum += read->val;
            }
            else{
                write->val = sum;
                write->next = read->next;
                write = read->next;
                sum = 0;
            }
            read = read->next;
        }
        return head;
    }
};