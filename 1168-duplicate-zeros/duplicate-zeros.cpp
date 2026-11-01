class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        while(j < n){
            if(arr[j] == 0 && j+1 < n){
                for(int k = n-1; k>j; k--){
                    arr[k] = arr[k-1];
                }
                arr[j+1] = 0;
                j++;
                
            }
            j++;
        }
        
    }
};