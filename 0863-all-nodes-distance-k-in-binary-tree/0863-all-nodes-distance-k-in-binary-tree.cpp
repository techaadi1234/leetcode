/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void mp(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&pt,TreeNode* target){

    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* c=q.front();
        q.pop();
        
       
            if(c->left){
                pt[c->left]=c;
                q.push(c->left);
            }
            if(c->right){
                pt[c->right]=c;
                q.push(c->right);
            }
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>pt;
        mp(root,pt,target);

        unordered_map<TreeNode*,bool>v;
        queue<TreeNode*>q;
        q.push(target);
        v[target]=true;
        int cl=0;
        while(!q.empty()){
              if(cl==k)break;
            int size=q.size();
          
            for(int i=0;i<size;i++){
                 TreeNode* node=q.front();
                 q.pop();
                 if(node->left && !v[node->left]){
                    q.push(node->left);
                    v[node->left]=true;
                 }
                  if(node->right && !v[node->right]){
                    q.push(node->right);
                    v[node->right]=true;
                 }
                  if(pt[node] && !v[pt[node]]){
                    q.push(pt[node]);
                    v[pt[node]]=true;
                 }
                 

            } cl++; }
            vector<int>result;
             while(!q.empty()){
                 TreeNode* node=q.front();
                 q.pop();
                 result.push_back(node->val);
             }

            

        return result;
    }
};