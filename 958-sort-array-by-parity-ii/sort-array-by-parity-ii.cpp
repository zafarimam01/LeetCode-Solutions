class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        int j = 0;
        while(j < n && i < n){
            if(nums[j] % 2 == 0){
                j+=2;
            }
            else if(nums[i] % 2 != 0){
                i += 2;
            }
            else{
                swap(nums[i],nums[j]);
                i+=2;
                j+=2;
            }
        }
        return nums;
    }
};