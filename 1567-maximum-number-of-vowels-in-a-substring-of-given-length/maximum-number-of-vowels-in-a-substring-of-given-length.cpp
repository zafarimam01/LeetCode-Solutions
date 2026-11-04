class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int i = 0 ;
        int j = 0;
        int maxVo = 0;
        int cnt = 0;
        while(i < n){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                cnt++;
            }
            if(i - j + 1 == k){
                maxVo = max(maxVo,cnt);
                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
                    cnt--;
                j++;
            }
            i++;

        }
        return maxVo;
    }
};