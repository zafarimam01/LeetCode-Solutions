class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> temp;

        int maxi = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++) {
            int total = candies[i] + extraCandies;

            if (total >= maxi)
                temp.push_back(true);
            else
                temp.push_back(false);
        }

        return temp;
    }
};