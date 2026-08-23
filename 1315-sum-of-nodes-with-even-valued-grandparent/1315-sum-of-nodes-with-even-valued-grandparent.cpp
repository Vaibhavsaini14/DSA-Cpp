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
    int sum = 0;
    void preorder(TreeNode* root, TreeNode* p , TreeNode* gP) {
        if (!root) return;
        if (gP != NULL && gP -> val % 2 == 0){
            sum += root->val;
        }
        preorder(root->left, root, p);
        preorder(root->right, root, p);
    }
    int sumEvenGrandparent(TreeNode* root) {
        preorder(root, NULL, NULL);
        return sum;
    }
};