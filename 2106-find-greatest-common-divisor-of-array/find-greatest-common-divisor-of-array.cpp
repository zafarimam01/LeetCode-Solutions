class Solution {
public:
    int findGCD(vector<int>& nums) {
        int low =  nums[0], high = nums[0];
        for(int i=0; i<nums.size(); i++){
            low = min(low, nums[i]);
            high = max(high, nums[i]);
        }
        return gcd(high,low);
    }
};