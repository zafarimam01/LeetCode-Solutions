class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size();
        int m = worker.size();
        vector<pair<int, int>>newArr;
        for(int i = 0; i < n; i++){
            newArr.push_back({difficulty[i],profit[i]});
        }
        sort(newArr.begin(),newArr.end());
        sort(worker.begin(),worker.end());
        int i = 0;
        int j = 0;
        int totalProfit = 0;
        int maxProfit = 0;
        while(j < m){
            while(i < n && worker[j] >= newArr[i].first){
                maxProfit = max(maxProfit,newArr[i].second);
                i++;
            }
            totalProfit += maxProfit;
            j++;
        }
        return totalProfit;
    }
};