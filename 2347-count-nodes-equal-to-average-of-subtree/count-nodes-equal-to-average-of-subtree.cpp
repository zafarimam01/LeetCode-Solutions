/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count(TreeNode* curr){
        int cnt = 0;
        if(curr->left==NULL && curr->right==NULL)
            cnt = 1;
        else if(curr->left==NULL)
            cnt = 1+count(curr->right);
        else if(curr->right==NULL)
            cnt = 1+count(curr->left);
        else
            cnt = 1+count(curr->left)+count(curr->right);
        return cnt;
    }
    int solve(TreeNode* curr, int &result){
        int sum = 0;
        if(curr->left==NULL && curr->right==NULL)
            sum = curr->val;
        else if(curr->left==NULL){
            sum = curr->val+solve(curr->right,result);
        }
        else if(curr->right==NULL)
            sum = curr->val+solve(curr->left,result);
        else
            sum = curr->val+solve(curr->left,result)+solve(curr->right,result);
        if(sum/count(curr)==curr->val)
            result++;
        return sum;
    }
    int averageOfSubtree(TreeNode* root) {
        int result = 0;
        solve(root,result);
        return result;
    }
};