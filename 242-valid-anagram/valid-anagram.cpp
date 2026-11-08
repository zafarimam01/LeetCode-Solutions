class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n != m){
            return false;
        }
        vector<int>s_hash(26,0);
        for(char ch : s){
            s_hash[ch-'a']++;
        }
        for(char ch : t){
            if(s_hash[ch - 'a'] == 0){
                return false;
            }
            s_hash[ch-'a']--;
        }
        return true;
    }
};