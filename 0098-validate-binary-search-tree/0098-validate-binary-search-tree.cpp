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
bool isb(TreeNode* node,long long miv,long long mav){
    if(!node)return true;
    else if(node->val<=miv || node->val>=mav) return false;
    else return (isb( node->left,miv,node->val) && isb( node->right,node->val,mav));
}
    bool isValidBST(TreeNode* root) {
      return isb(root,LLONG_MIN,LLONG_MAX);
    }
};