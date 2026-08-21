class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        for(auto it : nums1){
            st1.insert(it);
        }
        for(auto i : nums2){
            st2.insert(i);
        }
        vector<int>v1;
        vector<int>v2;
        for(auto x : st1){
            if(st2.find(x) == st2.end()){
                v2.push_back(x);
            }
        }
        for(auto n : st2){
            if(st1.find(n) == st1.end()){
                v1.push_back(n);
            }
        }

        return {v2,v1};
    }
};