// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mx=0;
        int i=0, j=height.size()-1;
        while(i<j){
            mx=max(mx, min(height[i], height[j])*(j-i));
            if(height[i]<=height[j]){
                i++;
            }else{
                j--;
            }
        }
        return mx;
    }
        // int mx=0, n=height.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int h=min(height[i], height[j]);
        //         mx=max(mx, h*(j-i));
        //     }
        // }
        // return mx;

        // int mx=INT_MIN, n=height.size();
        // vector<pair<int, int>> left(n);
        // vector<pair<int, int>> right(n);
        // left[0]={height[0], 0};
        // right[n-1]={height[n-1], n-1};
        // for(int i=1, j=n-2;i<n;i++, j--){
        //     if(left[i-1].first<height[i]){
        //         left[i]={height[i], i};
        //     }else{
        //         left[i]={left[i-1].first, left[i-1].second};
        //     }
        //     if(right[j+1].first<height[j]){
        //         right[j]={height[j], j};
        //     }else{
        //         right[j]={right[j+1].first, right[j+1].second};
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     int h=min(left[i].first, right[i].first);
        //     int len=abs(left[i].second-right[i].second);
        //     mx=max(mx, h*len);
        // }
        // return mx;
};