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
    int maxD = 0;
    int sum = 0;

    void preorder(TreeNode* root, int d) {
        if (!root) return;
        if (d > maxD) {
            maxD = d;
            sum = root->val;
        }
        else if (d == maxD) {
            sum += root->val;
        }
        preorder(root->left, d + 1);
        preorder(root->right, d+ 1);
    }
    int deepestLeavesSum(TreeNode* root) {
        preorder(root, 1);
        return sum;
    }
};