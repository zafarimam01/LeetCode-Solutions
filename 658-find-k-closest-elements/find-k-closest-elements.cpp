class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int l = 0;
        int r = n-k;
        vector<int> ans;
        while(l < r){
            int mid = l + (r - l) / 2;
            if(x - arr[mid] > arr[mid+k] - x){
                l = mid + 1;
            }
            else{
                r = mid;
            }
        }
        for(int i=l; i<l+k; i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};