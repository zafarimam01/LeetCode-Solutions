class Solution {
public:
    string solveAndSay(string s){
        if(s.size() == 0){
            return "1";
        }
        int len = s.size();
        string ans = "";
        for(int i=0; i<len; ++i){
            int cnt = 1;
            
            while(i < len-1 && s[i] == s[i+1]){
                cnt++;
                i++;
            }
            ans += to_string(cnt);
            ans += s[i];
        }
        return ans;

    }
    string countAndSay(int n) {
        string ans = "";
        while(n--){
            ans = solveAndSay(ans);
        }
        return ans;
    }
};