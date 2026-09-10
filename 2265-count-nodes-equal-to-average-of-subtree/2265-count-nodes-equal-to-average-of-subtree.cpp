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
    int res = 0;
    pair<int , int> findSum(TreeNode* root){
        if(!root){
            return {0 , 0};
        }
        auto l1 = findSum(root -> left); // function pair h
        auto r1 = findSum(root -> right);
        int sum = l1.first + r1.first + root -> val;
        int cnt = l1.second + r1.second + 1;

        if(root -> val == sum / cnt){
            res += 1;
        }
        return {sum , cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        findSum(root);
        return res;
    }
};