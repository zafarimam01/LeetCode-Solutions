class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        vector<int> v(2*n);
        int score = 0;
        for(int i=0; i<n; i++){
            v[i] = (s[i] == s[(i+1) %n]);
            v[i+n] = v[i];
        }
        for(int j=0; j<n-1; j++){
            score += v[j];
        }
        int ans = (score == k);
        for(int i=1; i<n; i++){
            score -= v[i-1];
            score += v[i + n -2];
            if (score == k)
                ans++;
        }
        return ans;
    }
};