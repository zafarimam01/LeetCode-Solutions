class Solution {
public:
    long long findMinTime(vector<int>& t, long long m){
        int n = t.size();
        long long currTrip = 0;
        for(int i=0; i<n; ++i){
            currTrip += m / t[i];
        }
        return currTrip;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long minElement = *min_element(time.begin(),time.end());

        long long low = 1;
        long long high = minElement * (long long)totalTrips;
        long long ans = high;

        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long totalTr = findMinTime(time,mid);
            
            if(totalTr >= totalTrips){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;

    }
};