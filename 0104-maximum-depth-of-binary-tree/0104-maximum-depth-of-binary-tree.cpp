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
void traverse(TreeNode*root,int ct){
    if(root==NULL)return ;
    else {
        ct++;
        ma=max(ct,ma);
        traverse(root->left,ct);
         traverse(root->right,ct);
    }
}
    int maxDepth(TreeNode* root) {
       
traverse(root,0);
return ma;
    }
};