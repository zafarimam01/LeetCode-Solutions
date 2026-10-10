class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();

        vector<int> sorNum = nums1;
        long long originalSum = 0;
        for(int i=0; i<n; ++i){
            originalSum += abs(nums1[i] - nums2[i]);
        }

        sort(sorNum.begin(),sorNum.end());     
        int maxImp = 0;   
        for(int i=0; i<n; ++i){
            int curr = abs(nums1[i] - nums2[i]);
            auto it = lower_bound(sorNum.begin(),sorNum.end(),nums2[i]);
            int rightMin = INT_MAX;
            if(it != sorNum.end()){
                rightMin = abs(*it - nums2[i]);
            }
            int leftMin = INT_MAX;
            if(it != sorNum.begin()){
                it--;
                leftMin = abs(*it - nums2[i]);
            }
            int best = min(rightMin,leftMin);
            int improve = curr-best;
            maxImp = max(maxImp,improve);
        }
        int mod = 1e9 + 7;
        return (originalSum - maxImp + mod) % mod;
        
    }
};