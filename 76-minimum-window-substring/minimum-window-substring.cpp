class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        int ans = INT_MAX;
        int start = -1;
        int l = 0, r = 0;
        int hash[256] = {0};
        for(int i=0; i<m;i++){
            hash[t[i]]++;
        }
        int count = 0;
        while(r < n){
            if(hash[s[r]] > 0)
                count++;
            hash[s[r]]--;
            while(count == m){
                if(r-l+1 < ans){
                    ans = r-l+1;
                    start = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0 ) count--;
                l++;
            }
            r = r+1;
        }
            
        if(start == -1){
            return "";
        }
        return s.substr(start,ans);
    }
};