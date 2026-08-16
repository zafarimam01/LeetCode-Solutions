class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int siz = digits.size()-1;
        for(int i=siz; i>=0; i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else if(digits[i]==9){
                digits[i] = 0;
                continue;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};