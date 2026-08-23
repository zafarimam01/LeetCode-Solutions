class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(auto i : nums2){
            mp[i]++;
        }
        vector<int> v;
        for(auto x : nums1){
            if(mp[x] > 0){
                v.push_back(x);
                mp[x]--;
            }
        }
        return v;
    }
};