class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int maxCus = 0;
        int satisfied = 0;
        for(int i = 0; i<n; i++){
            if(grumpy[i] == 0){
                satisfied += customers[i];
            }
        }
        int r = 0;
        int l = 0;
        int windSum = 0;
        int maxWindS = 0; 
        while(r < n){
            if(r - l + 1 > minutes){
                if(grumpy[l] == 1)
                    windSum -= customers[l];
                l++;
            }
            if(grumpy[r] == 1)
                windSum += customers[r];
            maxWindS = max(maxWindS,windSum);
            r++;
        }
        return maxWindS+satisfied;
    }
};