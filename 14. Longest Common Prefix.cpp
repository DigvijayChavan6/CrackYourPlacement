// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.

class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        int n=INT_MAX;
        string answer="";

        for(auto str : strs){
            n=min(n, (int)str.size());
        }
        for(int i=0;i<n;i++){
            int flag=0;
            char c;
            for(auto str : strs){
                if(flag==0){
                    c=str[i];
                    flag=1;
                    continue;
                }
                if(c != str[i])return answer;
            }
            answer+=c;
        }
        return answer;
    }

};