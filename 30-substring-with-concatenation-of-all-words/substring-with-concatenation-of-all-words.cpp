class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int sLen = s.length();
        int wLen = words.size();
        int k = words[0].length();
        unordered_map<string,int> mp;
        for(auto it : words){
            mp[it]++;
        }
        vector<int> ans;
        for(int i=0; i<k; ++i){
            unordered_map<string,int>curr;
            int l = i, r = i;
            while(r + k <= sLen){
                string t = s.substr(r,k);
                r += k;

                if(!mp.contains(t)){
                    curr.clear();
                    l = r;
                    continue;
                }
                curr[t]++;

                while(curr[t] > mp[t]){
                    string w = s.substr(l,k);
                    if(--curr[w] == 0){
                        curr.erase(w);
                    }
                    l += k;
                }
                if(r - l == k * wLen){
                    ans.push_back(l);
                }
            }
            
        }
        return ans;

    }
};