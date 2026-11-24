/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int getLength(ListNode* head){
        int len = 0;
        while(head != NULL){
            len++;
            head = head->next;
        }
        return len;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int m = getLength(headA), n = getLength(headB);
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        if(m < n){
            int d = n-m;
            while(d){
                d--;
                tempB = tempB->next;
                
            }
        }
        else{
            int d = m-n;
            while(d){
                d--;
                tempA = tempA->next;
            }
        }
        while(tempA != tempB){

            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
        // while(tempA != nullptr){
        //     ListNode* tempB = headB;
        //     while(tempB != NULL){
        //         if(tempA == tempB){
        //             return tempA;
        //         }
        //         tempB = tempB->next;
        //     }
        //     tempA = tempA->next;
        // }
        // return NULL;
    }
};