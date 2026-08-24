class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxPrice = 0;
        int profit = 0;
        bool s = false;
        for(int i=0; i<prices.size(); i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
            profit = max(profit,prices[i] - minPrice);
        }
        return profit;
    }
};