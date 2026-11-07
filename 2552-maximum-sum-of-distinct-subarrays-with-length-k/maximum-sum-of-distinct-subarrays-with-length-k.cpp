class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long maxSum = 0;
        int l = 0;
        int r = 0;
        long long sum = 0;
        unordered_set<int> st;
        while(r < n){

            while(st.count(nums[r])){
                sum -= nums[l];
                st.erase(nums[l]);
                l++;
            }
            sum += nums[r];
            st.insert(nums[r]);
            if(r - l + 1 == k){
                maxSum = max(maxSum,sum);
                sum -= nums[l];
                st.erase(nums[l]);
                l++;
            }
            r++;
        }
        return maxSum;
    }
};