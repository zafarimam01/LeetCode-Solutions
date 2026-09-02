class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int ans = 0;
        int last = 0;
        while(last < n && forts[last] == 0){
            last++;
        }
        for(int i=last+1; i<n; i++){
            if(forts[i] == 0){
                continue;
            }
            if(forts[last] != forts[i]){
                ans = max(ans,i-last-1);
            }
            last = i;
        }
        return ans;
    }
};