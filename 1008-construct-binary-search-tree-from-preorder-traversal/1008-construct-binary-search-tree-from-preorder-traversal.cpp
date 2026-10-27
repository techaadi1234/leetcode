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
     TreeNode* b(vector<int>& p,int &idx,int miv,int mav) {
       if(idx>=p.size() || p[idx]<miv || p[idx]>mav)return NULL;
       TreeNode* node=new TreeNode(p[idx++]);
       node->left= b(p, idx, miv,node->val);
 node->right= b(p, idx, node->val,mav);
 return node;
}
    TreeNode* bstFromPreorder(vector<int>& p) {
        int idx=0;
       return b(p,idx,INT_MIN,INT_MAX);}
};