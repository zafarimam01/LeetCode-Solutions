class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>merg;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                merg.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                merg.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            merg.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            merg.push_back(nums2[j]);
            j++;
        }
        nums1 = merg;
    }
};