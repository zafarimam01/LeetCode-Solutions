class Solution {
public:
    int smalstDivisor(vector<int>& nums, int m){
        int n = nums.size();
        int smD = 0;
        for(int i=0; i<n; ++i){
            smD += (nums[i] + m - 1) /m;
            // if(smD > 100000){
            //     return smD;
            // }
        }
        return smD;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElement = *max_element(nums.begin(),nums.end());
        int low = 1;
        int high = maxElement;
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int smallDivisor = smalstDivisor(nums,mid);
            if(smallDivisor <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
};