class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int l = 0;
        int r = 0;
        int prod = 1;
        while(r < n){
            prod *= nums[r];
            while(prod >= k && l <= r){
                prod /= nums[l];
                l++;
            }
            cnt += r-l+1;
            r++;
        }
        return cnt;
    }
};