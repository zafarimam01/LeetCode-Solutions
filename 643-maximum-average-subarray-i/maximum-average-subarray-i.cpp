class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxAvg = 0;
        int n = nums.size();
        int i=0,j=k-1;
        int window = 0;
        for(int z=0; z<=j; z++){
            window+= nums[z];
        }
        maxAvg = window;
        while(j < n-1){
            j++;
            window = window+nums[j];
            window = window-nums[i];
            i++;
            maxAvg = max(maxAvg,window);
        }
        return (double)maxAvg/k;
    }
};