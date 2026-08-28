class Solution {
public:
    int countDigit(int num)
    {
        int count=0;
            while(num>0)
            {
                count++;
                num/=10;
            }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(countDigit(nums[i])%2==0)
            {
                n++;
            }
        }
        return n;
    }
};