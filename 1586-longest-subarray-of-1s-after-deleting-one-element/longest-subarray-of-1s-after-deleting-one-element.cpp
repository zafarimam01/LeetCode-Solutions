class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = 0;

        int del = 0;
        int maxLen = INT_MIN;
        while(r < n){
            if(nums[r] == 0){
                del++;
                while(del > 1){
                    if(nums[l] == 0)
                        del--;
                    l++;
                }
            }
            maxLen = max(maxLen,r-l);
            r++;
            
        }
        return maxLen;
    }
};