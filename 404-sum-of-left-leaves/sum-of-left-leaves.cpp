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
    int sumOfLeftLeaves(TreeNode* root) {
        int res=0;
        if(root->left!=NULL)
        {
            if(root->left->left==NULL && root->left->right==NULL)
                res+=root->left->val;
            else
              res+=sumOfLeftLeaves(root->left);

        }
        if(root->right!=NULL)
            res+=sumOfLeftLeaves(root->right);
        return res;  
    }
};