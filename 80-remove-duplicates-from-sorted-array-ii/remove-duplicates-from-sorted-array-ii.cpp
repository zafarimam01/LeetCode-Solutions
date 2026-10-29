class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int read = 0;
        int write = 0;
        while(read < n){
            int cnt = 1;
            while(read + 1 < n && nums[read] == nums[read + 1]){
                cnt+=1;
                read++;
            }
            for(int i =0; i<min(2,cnt); i++){
                nums[write] = nums[read];
                write+=1;
            }
            read+=1;
        }
        return write;
    }
};