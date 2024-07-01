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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s= q.size();
            vector<int >v;
            for(int i=0; i<s; i++){
            TreeNode* a= q.front();
            q.pop();

            if(a->left!=NULL){
             q.push(a->left);

            }
             if(a->right!=NULL){
             q.push(a->right);

            }
            v.push_back(a->val);
            }
         ans.push_back(v);
        }
        return ans;

    }
};