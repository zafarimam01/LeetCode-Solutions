class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int maxElement = *max_element(candies.begin(),candies.end());
        int low = 1;
        int high = maxElement;
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long maxNum = 0;
            for(int i=0; i<n; ++i){
                maxNum += candies[i] / mid;
            }
            if(maxNum >= k){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;

    }
};