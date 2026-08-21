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
public:
    TreeNode* res = new TreeNode(0);
    TreeNode* temp = res;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root -> left);
        temp -> right = new TreeNode(root -> val);
        temp = temp -> right;
        inorder(root -> right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return res -> right;
    }
};