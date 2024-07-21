// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1;
        char c='0';
        string sum="";
        while(i>=0 && j>=0){
            int cnt=0;
            char t;
            if(a[i]=='1'){
                cnt++;
            }
            if(b[j]=='1'){
                cnt++;
            }
            if(c=='1'){
                cnt++;
            }
            if(cnt==3){
                c='1';
                t='1';
            }else if(cnt==2){
                c='1';
                t='0';
            }else if(cnt==1){
                t='1';
                c='0';
            }else{
                t='0';
                c='0';
            }
            sum=t+sum;
            i--; j--;
        }
        while(i>=0){
            int cnt=0;
            char t;
            if(a[i]=='1'){
                cnt++;
            }
            if(c=='1'){
                cnt++;
            }
            if(cnt==2){
                c='1';
                t='0';
            }else if(cnt==1){
                c='0';
                t='1';
            }else{
                c='0';
                t='0';
            }
            sum=t+sum;
            i--;
        }
        i=j;
        while(i>=0){
            int cnt=0;
            char t;
            if(b[i]=='1'){
                cnt++;
            }
            if(c=='1'){
                cnt++;
            }
            if(cnt==2){
                c='1';
                t='0';
            }else if(cnt==1){
                c='0';
                t='1';
            }else{
                c='0';
                t='0';
            }
            sum=t+sum;
            i--;
        }
        if(c=='1'){
            sum="1"+sum;
        }
        return sum;
    }
};