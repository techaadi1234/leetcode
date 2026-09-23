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
int ma=0;
    int diameterOfBinaryTree(TreeNode* root) {
         cd(root);
         return ma;
    }

    private:
    int cd(TreeNode* root){
        if(root==NULL)return 0;

        int lh=cd(root->left);

        int rh=cd(root->right);
        ma=max(lh+rh,ma);

        return max(lh,rh)+1;

         
    }
};