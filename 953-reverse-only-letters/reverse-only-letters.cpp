class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        string str(n,' ');
        int left = 0;
        int right = n-1;
        int wirte = 0;
        while(right > left){
            if(!isalpha(s[left])){
                left++;
            }
            else if(!isalpha(s[right]))
                right--;
            else{
                char c = s[left];
                s[left] = s[right];
                s[right] = c;
                left++;
                right--;
            }
        }
        return s;
    }
};