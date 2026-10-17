class Solution {
public:
    string solveComp(string w){
        int n = w.length();
        string c = "";
        
        for(int i=0; i<n;){
            int cnt = 1;
            while(i+1 < n && w[i] == w[i+1] && cnt < 9){
                i++;
                cnt++;
            }

            c += to_string(cnt);
            c += w[i];
            i++;

        }
        return c;
    }
    string compressedString(string word) {
        int n = word.length();
        string comp = "";
        comp = solveComp(word);
        return comp;
    }
};