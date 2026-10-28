class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int k = n-1;
        vector<int> ans(n);
        while(left <= right){

            if(abs(nums[left]) <= abs(nums[right])){
                ans[k] = nums[right]*nums[right];
                right--;
                k--;
            }
            else if(abs(nums[left]) > abs(nums[right])){
                ans[k] = nums[left]*nums[left];
                left++;
                k--;
            }

        }
        return ans;
    }
};