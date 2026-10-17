class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;

        for(int i=0; i<n;){
            char ch = chars[i];
            int cnt = 0;

            while(i < n && chars[i] == ch){
                i++;
                cnt++;
            }
            chars[write++] = ch;

            if(cnt > 1){
                string s = to_string(cnt);
                for(char digit: s){
                    chars[write++] = digit;
                }
            }
            
        }
        return write;
    }
};