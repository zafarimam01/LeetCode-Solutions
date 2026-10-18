class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int low = 0;
        int high = n-1;
        vector<int> arr;
        while(low < high){
            int mid = low + (high - low) / 2;
            int sum = numbers[low] + numbers[high];
            if(sum == target){
                arr.push_back(low+1);
                arr.push_back(high+1);
                return arr;
            }
            else if(sum > target){
                high--;
            }
            else{
                low++;
            }
        }
        return arr;
    }
};