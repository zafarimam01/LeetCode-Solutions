class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> temp;
        for(int i=0;i<accounts.size();i++)
        {
            int sum=0;
            for(int j=0;j<accounts[i].size();j++)
            {
                sum+=accounts[i][j];
            }
            temp.push_back(sum);
        }
        return *max_element(temp.begin(),temp.end());
    }
};