class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        bool result = false;
        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end()){
                if(i - mp[nums[i]] <= k){
                    result = true;
                }
            }
            mp[nums[i]] = i;
        }
        return result;
    }
};