class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int ans = INT_MAX;
        while(left <= right){
            int mid = left + (right - left) / 2;
            ans = min(ans,nums[mid]);
            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else if(nums[mid] < nums[right]){
                right = mid-1;
            }
            else if(nums[mid] == nums[right]){
                right = right-1;
            }
        }
        return ans;
    }
};