class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        

        auto it = upper_bound(letters.begin(),letters.end(),target);
        if(it != letters.end()){
            return *it;
        }
        // char ans = *it;
        // for(char ch : letters){
        //     if(ch > target){
        //         return ch;
        //     }

        // }
        return letters[0];
    }
};