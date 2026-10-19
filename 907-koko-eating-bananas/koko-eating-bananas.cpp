class Solution {
    int findMax(vector<int> & piles){
        int maxE = INT_MIN;
        for(int i=0; i<piles.size(); ++i){
            maxE = max(maxE,piles[i]);
        }
        return maxE;
    }
    long long calTime(vector<int>& piles,int hourly){
        long long totalHrs = 0;
        for(int i=0; i<piles.size(); ++i){
            totalHrs += (piles[i] + hourly - 1) / hourly;
        }
        return totalHrs;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long reqTime = calTime(piles,mid);
            if(reqTime <= h){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};