class Solution {
public:
    int isPelindrome(string s, int i, int j){
        while(i >= 0 && j < s.length() && s[i] == s[j]){
            i--;
            j++;
        }
        return j-i-1;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = 0;
        for(int i=0; i<n; i++){
            int oddLen = isPelindrome(s,i,i);
            int evenLen = isPelindrome(s,i,i+1);
            int len = max(oddLen,evenLen);

            if(len > (end - start + 1)){
                start = i - (len -1)/2;
                end = i + len/2;
            }
        }
        return s.substr(start,end - start + 1);
    }
    
};