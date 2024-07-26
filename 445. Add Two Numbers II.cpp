// You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [7,2,4,3], l2 = [5,6,4]
// Output: [7,8,0,7]
// Example 2:

// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [8,0,7]
// Example 3:

// Input: l1 = [0], l2 = [0]
// Output: [0]
 

// Constraints:

// The number of nodes in each linked list is in the range [1, 100].
// 0 <= Node.val <= 9
// It is guaranteed that the list represents a number that does not have leading zeros.
 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* rev(ListNode *node){
        ListNode *b=NULL, *c=NULL;
        while(node){
            b=node->next;
            node->next=c;
            c=node;
            node=b;
        }
        return c;
    }
public:
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        a=rev(a);
        b=rev(b);
        ListNode *start=NULL, *temp=NULL;
        int carry=0;
        while(a || b){
            int sum=0;
            if(a)sum+=a->val;
            if(b)sum+=b->val;
            sum+=carry;
            temp=new ListNode(sum%10);
            temp->next=start;
            start=temp;
            carry=sum/10;
            if(a)a=a->next;
            if(b)b=b->next;
        }
        if(carry){
            temp=new ListNode(carry);
            temp->next=start;
            start=temp;
        }
        return start;
    }
};