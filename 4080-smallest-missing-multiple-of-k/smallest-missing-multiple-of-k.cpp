class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }
        int t = k;
        int i = 2;
        while(mp.find(t) != mp.end()){
            t = i*k;
            i++;
        }
        return t;
    }
};