class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                zeros++;
            }
        }

        for(int i=n-1, j=n-1+zeros; i != j; i--){
            if(j < n){
                arr[j] = arr[i];
            }
            j--;
            if(arr[i] == 0){
                if(j < n){
                    arr[j] = arr[i];
                }
                j--;
            }
        }
        
    }
};