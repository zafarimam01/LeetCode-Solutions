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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode(0);

        ListNode* l1p = list1;
        ListNode* l2p = list2;
        ListNode* lp = list;

        while(l1p && l2p){
            if(l1p->val <= l2p->val){
                lp->next = l1p;
                lp = lp->next;
                l1p = l1p->next;
            }
            else{
                lp->next = l2p;
                lp = lp->next;
                l2p = l2p->next;
            }

        }
        if(l1p != NULL){
            lp->next = l1p;
        }
        else if(l2p != NULL){
            lp->next = l2p;
        }
        return list->next;
    }
};