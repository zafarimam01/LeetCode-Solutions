/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int low = 0;
        int high = n-1;

        int peak = 0;
        while(low < high){
            int mid = low + (high - low) / 2;
            
            if(mountainArr.get(mid) < mountainArr.get(mid+1)){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        peak = low;
        high = peak;
        low = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        low = peak + 1;
        high = n-1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};