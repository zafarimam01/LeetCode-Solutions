class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int size = nums1.size()+nums2.size();
       int i=0,j=0;
       int curr = 0;
       int prev = 0;
       for(int count=0; count<=size/2; count++){
            prev = curr;
            if(j >= nums2.size() || (i < nums1.size() && nums1[i] <= nums2[j])){
                curr = nums1[i++];
            }
            else curr = nums2[j++];   
       }
       if(size%2!=0){
        return curr;
       }
       else return (curr+prev)/2.0;
    }
};