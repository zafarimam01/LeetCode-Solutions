class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n = firstList.size();
        int m = secondList.size();
        vector<vector<int>> ans;
        vector<int>temp(2);
        int i = 0;
        int j = 0;
        while(i < n && j < m){
            if(firstList[i][0] <= secondList[j][1] && firstList[i][1] >= secondList[j][0]){
                temp[0] = max(firstList[i][0],secondList[j][0]);
                temp[1] = min(firstList[i][1],secondList[j][1]);
                ans.push_back(temp);
            }
            if(firstList[i][1] < secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};