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
    private:
     TreeNode* build(vector<int>& preorder, int ps,int pe,vector<int>& inorder,
     int is,int ie,unordered_map<int,int>&im ){
        if(ps>pe || is >ie)return NULL;
        
        TreeNode* root= new TreeNode (preorder[ps]);
        int inroot=im[root->val];
        int numsleft=inroot-is;
         root->left=build(preorder, ps+1,ps+numsleft,inorder,is,inroot-1,im);
          root->right=build(preorder,ps+numsleft+1,pe,inorder,inroot+1,ie,im);
          return root;
     }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>im ;
        for(int i=0;i<inorder.size();i++)im[inorder[i]]=i;
        return build(preorder,0,preorder.size()-1,inorder,0, inorder.size()-1,im);
    }
};