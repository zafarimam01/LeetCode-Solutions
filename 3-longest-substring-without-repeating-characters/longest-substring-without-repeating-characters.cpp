class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        vector<int> has(256,-1);
        int n = s.size();
        int r = 0,l = 0;
        int len = 0;
        while(r < n){
            if(has[s[r]] != -1){
                if(has[s[r]] >= l){
                    l = has[s[r]]+1;                    
                }
            }
            len = r-l+1;
            maxLen = max(len,maxLen);
            has[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};