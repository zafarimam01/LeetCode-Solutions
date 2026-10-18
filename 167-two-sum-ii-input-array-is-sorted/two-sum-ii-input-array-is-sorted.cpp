class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i<n; ++i){
            int x = target - numbers[i];
            int low = i+1;
            int high = n-1;

            while(low <= high){
                int mid = low + (high - low) / 2;
                if(x == numbers[mid]){
                    return {i+1,mid+1};
                }
                else if(numbers[mid] > x){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        return {};
    }
};