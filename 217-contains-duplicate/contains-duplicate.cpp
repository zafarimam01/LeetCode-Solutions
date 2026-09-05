class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool res = false;
        for (int x : nums)
        {
            mp[x]++;
        }

        for (auto it : mp) 
        {   
            if(it.second>1)
            {
                res = true;
            }
        
        }
        return res;

    }
};