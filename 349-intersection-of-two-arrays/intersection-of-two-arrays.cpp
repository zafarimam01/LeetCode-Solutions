class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> ans;
        for(auto x : nums1){
            st.insert(x);
        }
        for(int i=0; i<nums2.size(); i++){
            if(st.find(nums2[i]) != st.end()){
                ans.insert(nums2[i]);
            }
        }
        vector<int> result(ans.begin(),ans.end());
        return result;

    }
};