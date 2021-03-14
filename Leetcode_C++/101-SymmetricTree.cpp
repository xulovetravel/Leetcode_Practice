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
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        return helper(root, root);
    }
    bool helper(TreeNode *left1, TreeNode *right1) {
        //cout<<left1->val<<endl;
        //cout<<right1->val<<endl;
        if((left1 == nullptr) && (right1==nullptr)) return true;
        else if((left1 == nullptr) || (right1==nullptr)) return false;
        else if(left1->val != right1->val) return false;
        else {
             return helper(left1->right, right1->left) && helper(left1->left, right1->right);
        }
           
    }
    
};