class Solution {
public:
    int countLess(vector<vector<int>>& mat, int mid){
        int n = mat.size();
        int i = n-1;
        int j = 0;
        int count = 0;
        while(i >= 0 && j < n){
            if(mat[i][j] <= mid){
                count += i+1;
                j++;
            }
            else{
                i--;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];

        while(low < high){
            int mid = low + (high - low) / 2;
            int count = countLess(matrix,mid);
            
            if(count < k){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};