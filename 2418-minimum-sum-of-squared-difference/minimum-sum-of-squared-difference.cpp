class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> ans(1e5+1, 0);
        for(int i=0; i<n; ++i){
            int diff = abs(nums1[i] - nums2[i]);
            ans[diff]++;
        }
        int k = k1+k2;

        for(int i = 1e5; i>0 && k>0; --i){

            int countOps = min(ans[i],k);
            ans[i] -= countOps;
            ans[i-1] += countOps;
            k -= countOps;
        }
        long long result = 0;
        for(long long i=0; i<=100000; ++i){
            result += (ans[i]* i*i);
        }
        return result;
    }
};