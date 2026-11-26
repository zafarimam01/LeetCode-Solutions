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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>st (nums.begin(),nums.end());
        ListNode* temp = head;
        int comp = 0;
        while(temp != NULL){
            if(st.count(temp->val)){
                comp++;
                while(temp != NULL && st.count(temp->val)){
                    temp = temp->next;
                }
            }
            else{
                temp = temp->next;
            }
            
        }
        return comp;
    }
};