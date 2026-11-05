class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int cnt = 0;
        int maxFruits = 0;
        int left =0;
        int right = 0;
        map<int,int> mp;
        while(right < n){
            mp[fruits[right]]++;
            if(mp.size() > 2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            if(mp.size() <= 2){
                maxFruits = max(maxFruits,right - left + 1);
            }
            right++;
        }
        return maxFruits;

    }
};