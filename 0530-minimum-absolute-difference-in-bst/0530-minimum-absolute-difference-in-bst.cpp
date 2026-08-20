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
    int diff = INT_MAX;
    void inorder(TreeNode* root , TreeNode* &prev){
        if(!root) return;
        inorder(root -> left , prev);
        if(prev != NULL){
            int curdiff = (root -> val) - (prev -> val);
            diff = min(curdiff , diff);
        }
        prev = root;
        inorder(root -> right , prev);
    }
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = NULL;
        inorder(root , prev);
        return diff;
    }
   
};