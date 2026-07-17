class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int max_sum = nums[0];
        for(int i=0; i<nums.size(); i++){
            ans += nums[i];
            max_sum = max(max_sum,ans);
            if(ans <0) ans = 0;
        }
        return max_sum;
    }
};
