class Solution {
public:
    string reverseStr(string s, int k) {
        int st=0,end=st+1;
        for(int i=0; i<s.size(); i+=k*2){
            int st = i;
            int end = min(i + k -1,int(s.size()-1));
            while(st < end){
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
};