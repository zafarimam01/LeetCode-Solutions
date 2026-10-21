class Solution {
public:
    int findminElement(vector<int>&quan, int mid){
        int k = quan.size();
        int x = 0;
        for(int i=0; i<k; ++i){
            x += (quan[i] + mid - 1) / mid;
        }
        return x;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int m = quantities.size();
        int maxElement = *max_element(quantities.begin(),quantities.end());
        int low = 1;
        int high = maxElement;
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int minMaxEl = findminElement(quantities,mid);
            if(minMaxEl <= n){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};