class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        vector<pair<int,int>> arr;
        for(auto x : mp){
            arr.push_back({x.first,x.second});
        }
        sort(arr.begin(),arr.end(), [](pair<int,int>& a, pair<int,int> &b){
            return a.second > b.second;
        });
        
        for(int i=0; i<k; i++){
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};