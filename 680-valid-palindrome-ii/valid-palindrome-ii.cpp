class Solution {
public:
    bool isPalindrome(string st,int l,int r){
        while(l <= r){
            if(st[l] == st[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int l=0;
        int r = n-1;
        int cnt = 0;
        while(l <= r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return isPalindrome(s,l,r-1) || isPalindrome(s,l+1,r);
            }

        }
        return true;
    }
};