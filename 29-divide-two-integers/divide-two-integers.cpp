class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor){
            return 1;
        }
        bool sign = true;
        if(dividend > 0 && divisor < 0) sign = false;
        else if(dividend < 0 && divisor > 0) sign = false;
        long long n = llabs(dividend);
        long long m = llabs(divisor);
        long long ans = 0;
        while(n >= m){
            int cnt = 0;
            while(n >= (m << (cnt + 1))){
                cnt++;
            }
            ans += (1ll<<cnt);
            n -= (m<<cnt);
        }
        if(ans == (1ll<<31) && sign) return INT_MAX;
        if(ans == (1ll<<31) && !sign) return INT_MIN;
        return sign ? ans: -ans;
    }
};