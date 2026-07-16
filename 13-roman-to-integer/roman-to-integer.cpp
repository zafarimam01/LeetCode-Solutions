class Solution {
public:
    int getdet(char r){
        if(r == 'I') return 1;
        if(r == 'V') return 5;
        if(r == 'X') return 10;
        if(r == 'L') return 50;
        if(r == 'C') return 100;
        if(r == 'D') return 500;
        if(r == 'M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        int current = getdet(s[i]);
        if(i + 1 < s.size() && current < getdet(s[i + 1])){
            ans -= current;
        }
        else {
            ans += current;
        }
    }
    return ans;

    }
};