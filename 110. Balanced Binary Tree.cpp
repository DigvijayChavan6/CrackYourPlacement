// Given a binary tree, determine if it is 
// height-balanced
// .

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: true
// Example 2:


// Input: root = [1,2,2,3,3,null,null,4,4]
// Output: false
// Example 3:

// Input: root = []
// Output: true
 

// Constraints:

// The number of nodes in the tree is in the range [0, 5000].
// -104 <= Node.val <= 104

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool status;
    int height(TreeNode* root){
        if(!root)return 0;
        int l=height(root->left);
        int r=height(root->right);
        if(abs(l-r)>1){
            status=false;
            return 0;
        }
        return max(l, r)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        status=true;
        if(!root)return true;
        int t=abs(height(root->left)-height(root->right));
        return t<=1 && status;
    }
};