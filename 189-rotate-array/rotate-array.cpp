class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int newK = k % n; // find k if it is greater then > n then not need to rotate k times we can simply do k % n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+newK);
        reverse(nums.begin()+newK, nums.end());            


    }
};