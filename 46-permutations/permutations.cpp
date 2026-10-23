class Solution {
public:
    vector<vector<int>> permutations(vector<int>& num, vector<vector<int>>& res,int idx){
        int n = num.size();
        if(idx == n-1){
            res.push_back(num);
            return res;
        }
        for(int i = idx; i<n; ++i){
            swap(num[idx],num[i]);

            permutations(num,res,idx+1);

            swap(num[idx],num[i]);
        }
        return res;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        return permutations(nums,res,0);
    }
};