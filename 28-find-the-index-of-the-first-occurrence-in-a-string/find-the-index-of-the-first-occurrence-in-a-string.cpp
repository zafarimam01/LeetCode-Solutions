class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();
        
        for(int i=0; i<=m-n; ++i){
            int j= 0;
            while(j < n){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                j++;
            }
            if(j == n){
                return i;
            }
        }
        return -1;
    }
};