// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int answer=0;
        for(int val : nums){
            if(cnt==0){
                answer=val;
            }
            if(val == answer)cnt++;
            else cnt--;
        }
        return answer;
        // int n=nums.size();
        // sort(nums.begin(), nums.end());
        // return nums[n/2];
    }
};