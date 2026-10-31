class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int boatcnt = 0;
        sort(people.begin(),people.end());
        int left = 0;
        int right = n-1;
        while(left <= right){
            int sum = people[left]+people[right];
            if(sum <= limit){
                left++;
                right--;
                boatcnt++;
            }
            else if(sum > limit){
                boatcnt++;
                right--;
            }
            
        }
        return boatcnt;
    }
};