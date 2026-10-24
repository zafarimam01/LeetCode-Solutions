class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        vector<int> ans;
        while(r - l + 1 > k){
            if(abs(arr[l] - x) < (abs(arr[r] - x))){
                r--;
            }
            else if(abs(arr[l] - x) > (abs(arr[r] - x))){
                l++;
            }
            else if(abs(arr[l] - x) == (abs(arr[r] - x))){
                r--;
            }
        }
        for(int i=l; i<=r; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};