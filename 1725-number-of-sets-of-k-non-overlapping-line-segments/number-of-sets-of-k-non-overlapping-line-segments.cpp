class Solution {
public:
    vector<vector<vector<long long>>> dp;
    int solve(int n,int k,int started,int i){

        if(k < 0)
            return 0;
        if(i==n){
            return (k == 0 && started == 0);
        }
        if(dp[i][k][started] != -1)
            return dp[i][k][started];

        long long ans = 0;
        int mod = 1e9+7;
        if(started == 1){
            ans += solve(n,k,1,i+1);
            ans += solve(n,k-1,0,i);
        }
        else{
            ans += solve(n,k,0,i+1);
            ans += solve(n,k,1,i+1);
        }
        return dp[i][k][started] = ans % mod;
    }
    int numberOfSets(int n, int k) {
        dp = vector<vector<vector<long long>>>(n,vector<vector<long long>>(k+1, vector<long long>(2, -1)));
        return solve(n,k,0,0);
    }
};