class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = 0;
        int cnt = 0;
        int del = 0;
        int maxLen = INT_MIN;
        while(r < n){
            if(nums[r] == 0){
                del++;
                if(del == 2){
                    while(nums[l] != 0){
                        l++;
                    }
                    l++;
                    del--;
                }
                maxLen = max(maxLen,r-l);
                r++;
            }
            else{
                maxLen = max(maxLen,r-l);
                r++;
            }
            
        }
        return maxLen;
    }
};