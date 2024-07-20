// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false
 

// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters.

class Solution {
    bool isPalin(string s, int i, int j){
        while(i<=j){
            if(s[i] != s[j]){
                return false;
            }
            i++; j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<=j){
            if(s[i] != s[j]){
                return isPalin(s, i+1, j) || isPalin(s, i, j-1);
            }
            i++; j--;
        }
        return true;
    }
};

// class Solution {
//     bool isPalin(string s){
//         int i=0, j=s.size()-1;
//         while(i<j){
//             if(s[i] != s[j]){
//                 return false;
//             }
//             i++; j--;
//         }
//         return true;
//     }
// public:
//     bool validPalindrome(string s) {
//         int i=0, n=s.size();
//         string sub="";
//         while(i<n){
//             if(isPalin(sub+s.substr(i+1))){
//                 return true;
//             }
//             sub+=s[i];
//             i++;
//         }
//         return false;
//     }
// };