class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            int minInd = nums[i];
            int maxInd = nums[0];
            for(int j=0; j<=i; j++){
                maxInd = max(maxInd,nums[j]);
            }
            for(int j=i; j<n; j++){
                minInd = min(minInd,nums[j]);
            }
            if((maxInd - minInd) <=k){
                return i;
            }

        }
        return -1;
    }
};