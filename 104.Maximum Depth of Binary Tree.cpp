// Given the root of a binary tree, return its maximum depth.

// A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: 3
// Example 2:

// Input: root = [1,null,2]
// Output: 2
 

// Constraints:

// The number of nodes in the tree is in the range [0, 104].
// -100 <= Node.val <= 100


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
    void getMax(TreeNode *root, int depth, int &mx_depth){
        if(!root)return ;
        depth++;
        mx_depth=max(mx_depth, depth);
        getMax(root->left, depth, mx_depth);
        getMax(root->right, depth, mx_depth);
    }
public:
    int maxDepth(TreeNode* root) {
        int mx_depth=0;
        int cnt=0;
        getMax(root, cnt, mx_depth);
        return mx_depth;
    }
};