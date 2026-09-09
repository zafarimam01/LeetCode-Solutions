class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n = nums.size();
        set<long long> ss(nums.begin(),nums.end());
        if(valueDiff == 0 && n == ss.size()) return false;
        for(long long i=0; i<n; i++){
            for(long long j=i+1; j<n && j <= i+indexDiff; j++){
                if(abs((long long)nums[i] - nums[j]) <= valueDiff){
                    return true;
                }
            }
        }
        return false;
    }
};