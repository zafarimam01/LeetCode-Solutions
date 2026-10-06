class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = 1;
        int cnt = 0;
        sort(nums.begin(),nums.end());
        while(r < n){
            if(nums[r] - nums[l] == k){
                cnt++;
                int leftVal = nums[l];
                int right = nums[r];
                while(l < n && nums[l] == leftVal){
                    l++;
                }
                while(r < n && nums[r] == right){
                    r++;
                }
            }
            else if(nums[r] - nums[l] < k){
                r++;
            }
            else{
                l++;
            }
            if(l == r){
                r++;
            }
        }
        return cnt;
    }
};