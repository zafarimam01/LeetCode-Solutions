class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>v1;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            int j=i+1,k=n-1;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];

                if(sum == 0){
                    v1.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;
            }

        }
        return vector<vector<int>>(v1.begin(),v1.end());
    }
};