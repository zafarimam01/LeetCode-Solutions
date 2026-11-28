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
    ListNode* Greverse(ListNode* temp){
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    ListNode* findktNode(ListNode* head,int k){
        ListNode* temp = head;
        k -= 1;
        while(temp != NULL && k > 0){
            k -= 1;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0;
        ListNode* curr = head;
        ListNode* prevLast = NULL;

        while(curr != NULL){
            ListNode* kthNode = findktNode(curr,k);
            if(kthNode == NULL){
                if(prevLast){
                    prevLast->next = curr;
                    break;
                }
            }
            ListNode* kthNodenxt = kthNode->next;
            kthNode->next = NULL;
            Greverse(curr);
            if(head == curr){
                head = kthNode;
            }
            else{
                prevLast->next = kthNode;
            }
            prevLast = curr;
            curr = kthNodenxt;
        }
        return head;
    }
};