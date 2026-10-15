class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        // auto it = upper_bound(letters.begin(),letters.end(),target);
        // char ans = *it;
        for(char ch : letters){
            if(ch > target){
                return ch;
            }

        }
        return letters[0];
    }
};