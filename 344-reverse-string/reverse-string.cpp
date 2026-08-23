class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0,end=s.size()-1;
        while(st < end){
            char temp = s[st];
            s[st] = s[end];
            s[end] = temp;
            st++;
            end--;
            cout << st << end ;
        }
    
    }
};