class Solution {
public:
    bool isfreqSame(int Freq1[], int freq2[]){
        for(int i=0; i<26; i++){
            if(Freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        int hash[26] = {0};
        for(int i=0; i<n; i++)
            hash[s1[i] - 'a']++;
        int windSize = n;
        for(int i=0; i<m; i++){
            int windIdx = 0,idx =i;
            int windFreq[26] = {0};
        
            while(windIdx < windSize && idx < m){
                windFreq[s2[idx] - 'a']++;
                windIdx++;
                idx++;
            }
            if(isfreqSame(hash,windFreq)){
                return true;
        }
        }
        return false;
    }
};