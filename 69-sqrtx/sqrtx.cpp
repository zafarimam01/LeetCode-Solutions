class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int low = 1;
        int max = x/2;
        int ans =0;
        while(low <= max){
            int mid = low+(max-low)/2;
            if(mid <= x/mid){
                ans = mid;
                low = mid + 1;
            }
            else
                max = mid - 1;
        }
        return ans;
    }
};