/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;

        if (root == NULL)
            return res;
        q.push(root);
    
        while (!q.empty()){
             int ls = q.size();
            vector<int>ans;
            for(int i=0;i<ls;i++){
                TreeNode *node=q.front();
                q.pop();
                ans.push_back(node->val);

                if(node->left!=NULL)q.push(node->left);
                 if(node->right!=NULL)q.push(node->right);
            }
            res.push_back(ans);
        }
        return res;
    }
};
