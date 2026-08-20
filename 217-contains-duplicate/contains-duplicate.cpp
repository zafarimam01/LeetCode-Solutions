class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int cnt = 0;
        bool res = false;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                cnt++;
                res = true;
            }
        }
        return res;

    }
};