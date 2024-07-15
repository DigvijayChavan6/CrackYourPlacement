// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, z=0, n=nums.size(), cur=0;
        while(cur<n){
            if(nums[cur] == 0){
                z++;
            }else{
                nums[i]=nums[cur];
                i++;
            }
            cur++;
        }
        while(z>0){
            nums[i]=0;
            z--; i++;
        }
    }
};