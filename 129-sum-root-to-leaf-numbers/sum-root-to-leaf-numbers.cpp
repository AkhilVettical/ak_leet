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
    bool isleaf(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
            return true;
        return false;

    }
    int sumNumbers(TreeNode* root,int cur) {
        if(root==nullptr)
        return 0;

        cur=cur*10+root->val;

        if(isleaf(root))
           return cur;
        return sumNumbers(root->left,cur)+sumNumbers(root->right,cur);
    }
    int sumNumbers(TreeNode* root)
    {
        return sumNumbers(root,0);
    }
};