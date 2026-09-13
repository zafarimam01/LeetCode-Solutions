class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int ,int>> non_zero1;
        vector<pair<int,int>> non_zero2;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(img1[i][j]==1)
                    non_zero1.push_back({i,j});
                if(img2[i][j]==1)
                    non_zero2.push_back({i,j});
                
            }
        }
        unordered_map<int,int> shift_counts;
        int max_overlap = 0;
        for(auto& p1 : non_zero1){
            for(auto& p2 : non_zero2){
                int row_diff = p2.first - p1.first;
                int col_diff = p2.second - p1.second;
                int key = (row_diff + 30) * 100+(col_diff+30);
                shift_counts[key]++;
                max_overlap = max(max_overlap,shift_counts[key]);
            }
        }
        return max_overlap;
    }
};