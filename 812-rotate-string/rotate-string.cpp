class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(n != goal.length())
            return false;
        if((s+s).find(goal) != string::npos){
            return true;
        }        
        return false;
    }
};