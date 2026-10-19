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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        long long ans=0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        
        while(!q.empty()){
          
            int mi=q.front().second;
            
              long long size=q.size();
              long long f=0,l=0;
            for(int i=0;i<size;i++){
                  long long ci=q.front().second-mi;
                  TreeNode* node=q.front().first;q.pop();
                if(i==0)f=ci;
                if(i==size-1)l=ci;
                if(node->left)q.push({node->left,ci*2+1});
                  if(node->right)q.push({node->right,ci*2+2});

            }
           
ans=max(ans,l-f+1);
        }
        return ans;
    }
};