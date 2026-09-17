class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        int i = 0;
        int j = 0;
        long long currSum = 0;
        vector<int>minLen(n, INT_MAX);
        int bestMin = INT_MAX;
        int result = INT_MAX;

        while(j < n){
            currSum += arr[j];
            while(currSum > target){
                currSum -= arr[i++];
            }

            if(currSum == target){
                int len = j-i+1;

                if(i > 0 && minLen[i-1] != INT_MAX){
                    result = min(len+minLen[i-1],result);
                }
                bestMin = min(bestMin,len);
            }
            minLen[j] = bestMin;
            j++;
        }
        return result == INT_MAX ? -1 : result;

    }
};