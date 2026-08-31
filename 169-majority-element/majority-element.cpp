class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        int k = nums.size()/2;
        for(auto it : mp){
            if(it.second > k){
                return it.first;
            }
        }
        return 0;
    }
};