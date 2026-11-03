class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>ans;
        for(int x : nums){
            if(x < pivot){
                ans.push_back(x);
            }
        }
        for(int k : nums){
            if(k == pivot){
                ans.push_back(k);
            }
        }
        for(int y : nums){
            if(y > pivot){
                ans.push_back(y);
            }
        }
        return ans;
    }
};