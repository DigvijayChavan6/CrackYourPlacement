// Given the root of a binary tree, return all root-to-leaf paths in any order.

// A leaf is a node with no children.

 

// Example 1:


// Input: root = [1,2,3,null,5]
// Output: ["1->2->5","1->3"]
// Example 2:

// Input: root = [1]
// Output: ["1"]
 

// Constraints:

// The number of nodes in the tree is in the range [1, 100].
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
    void getPaths(TreeNode *root, string path, vector<string> &ans){
        if(!root)return ;
        path=path+"->"+to_string(root->val);
        if(root->left == root->right){
            ans.push_back(path.substr(2));
            return ;
        }
        getPaths(root->left, path, ans);
        getPaths(root->right, path, ans);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        string path="";
        vector<string> answer;
        getPaths(root, path, answer);
        return answer;
    }
};