class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        int MaxProfit2 = 0;
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
                maxProfit += prices[i] - minPrice;
            }
            if(prices[i] > prices[i-1]){
                maxProfit += prices[i] - prices[i-1];
            }
        }
        return maxProfit;
    }
};