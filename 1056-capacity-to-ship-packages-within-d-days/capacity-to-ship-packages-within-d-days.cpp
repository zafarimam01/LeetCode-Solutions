class Solution {
public:
    int findMinDays(vector<int>& weight, int w){
        int k = weight.size();
        int currWeight = 0;
        int days = 1;
        for(int i=0; i<k; ++i){
            if(currWeight + weight[i] <= w){
                currWeight += weight[i];
            }
            else{
                days++;
                currWeight = weight[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int maxElement = *max_element(weights.begin(),weights.end());
        int totalWeight = accumulate(weights.begin(),weights.end(),0);
        
        int ans = maxElement;

        int low = maxElement;
        int high = totalWeight;

        while(low <= high){
            int mid = low + (high - low) / 2;
            int reqDays = findMinDays(weights,mid);
            if(reqDays <= days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};