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
    void inorder(TreeNode* root , vector<int> &res){
        if(!root) return;
        inorder(root -> left , res);
        res.push_back(root -> val);
        inorder(root -> right , res);   
    }
    TreeNode* newBST(vector<int> & res , int l , int r){
        if(l > r) return NULL;
        int mid = l + (r - l)/2;
        TreeNode* root = new TreeNode(res[mid]);
        root -> left = newBST(res , l , mid - 1);
        root -> right = newBST(res , mid + 1 , r);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
       vector<int> res;
       inorder(root , res);
       int l = 0;
       int r = res.size() - 1;
       return newBST(res , l , r);
    }
};