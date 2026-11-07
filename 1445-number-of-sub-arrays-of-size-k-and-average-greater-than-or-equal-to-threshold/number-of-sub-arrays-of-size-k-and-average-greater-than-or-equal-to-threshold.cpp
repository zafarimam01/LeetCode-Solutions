class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int cnt = 0;
        int l = 0;
        int r = 0;
        int avg = 1;
        int sum = 0;
        while(r < n){
            sum += arr[r];
            if((r - l + 1) == k){
                if(sum >= k*threshold)
                    cnt++;
                sum -= arr[l];
                l++;
            }
            r++;
            
        }
        return cnt;
    }
};