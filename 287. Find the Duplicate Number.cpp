// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

 

// Example 1:

// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:

// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:

// Input: nums = [3,3,3,3,3]
// Output: 3
 

// Constraints:

// 1 <= n <= 105
// nums.length == n + 1
// 1 <= nums[i] <= n
// All the integers in nums appear only once except for precisely one integer which appears two or more times.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int d=0;
        int n=nums.size()-1;
        for(int i=0;i<=n;i++){
            int t=abs(nums[i])-1;
            if(nums[t]<0){
                d=abs(nums[i]);
                break;
            }else{
                nums[t]=-nums[t];
            }
        }
        for(int i=0;i<=n;i++){
            nums[i]=abs(nums[i]);
        }
        return d;
    }
};