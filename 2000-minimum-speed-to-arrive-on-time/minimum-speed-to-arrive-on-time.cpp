class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        int high = 1e7;
        int low = 1;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            double KmphTocomplete = 0;
            for(int i=0; i<n; ++i){
                if(i == n-1){
                    KmphTocomplete += (double)dist[i]/mid;
                }
                else{
                    KmphTocomplete += (dist[i] + mid -1) / mid;
                }
            }
            if(KmphTocomplete <= hour){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};