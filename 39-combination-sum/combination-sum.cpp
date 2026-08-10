class Solution {
public:
    set<vector<int>>s;

    void CombinaSum(vector<int>&candidates,int idx, int tar, vector<vector<int>>&ans, vector<int>&combin){
        if(idx == candidates.size() || tar < 0){
            return;
        }
        if(tar == 0){
            if(s.find(combin) == s.end()){
                ans.push_back({combin});
                s.insert(combin);
            }
            return;
        }

        combin.push_back(candidates[idx]);
        //Single Element
        CombinaSum(candidates,idx+1,tar-candidates[idx],ans,combin);

        // One ELement Multiple time
        CombinaSum(candidates,idx,tar-candidates[idx],ans,combin);
        combin.pop_back();
        // Exclude a element
        CombinaSum(candidates,idx+1,tar,ans,combin);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>combin;
        CombinaSum(candidates,0,target,ans,combin);
        return ans;
    }
};