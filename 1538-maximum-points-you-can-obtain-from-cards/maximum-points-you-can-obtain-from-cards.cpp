class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left = 0;
        int right = 0;
        for(int i=0; i<k; i++){
            left = left+cardPoints[i];
        }
        int maxSum = left;
        int lastInd = cardPoints.size()-1;
        for(int j=k-1; j>=0; j--){
            left = left-cardPoints[j];
            right = right+cardPoints[lastInd];
            lastInd--;
            
            maxSum = max(maxSum,left+right);
        }
        return maxSum;
    }
};