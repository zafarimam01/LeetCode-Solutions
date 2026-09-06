class Solution {
public:
    long long dp[1001][1001];
    long long solve(int n,int k, string &s, string &t){
        if(k == 0) return dp[n][k] = 1;
        if(n == 0) return dp[n][k] = 0;
        if(dp[n][k] != -1){
            return dp[n][k];
        }
        if(s[n-1] == t[k-1]){
            return dp[n][k] = solve(n-1,k-1,s,t) + solve(n-1,k,s,t);
        }
        else{
            return dp[n][k] = solve(n-1,k,s,t);
        }
        return -1;
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int k = t.size();
        memset(dp,-1,sizeof(dp));
        return solve(n,k,s,t);
    }
};