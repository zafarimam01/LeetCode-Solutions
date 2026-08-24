class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0;
        int minValue = nums[0];
        for(int k=0; k<nums.size(); k++){
            if(nums[k] < minValue){
                minValue = nums[k];
            }
            else{
                ans = max(ans,nums[k]-minValue);
            }
        }
        if(ans == 0){
            return -1;
        }
        return ans;
    }
};