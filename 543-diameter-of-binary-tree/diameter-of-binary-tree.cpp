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
int maxDepth(TreeNode* root) {
if(root ==NULL){
            return 0;
        }
        
        int mxdL = maxDepth(root->left);
                int mxdR = maxDepth(root->right);

                if(mxdL > mxdR){
                    return mxdL+1;
                }else{
                    return mxdR+1;
                }


    }
        int diameterOfBinaryTree1(TreeNode* root, int &maxi) {
if(root==NULL){
            return 0;
        }
           int mxdL = maxDepth(root->left);
        int mxdR = maxDepth(root->right); 
       maxi= max(maxi, mxdR+mxdL);
      int m = diameterOfBinaryTree1(root->left , maxi);
      int l =        diameterOfBinaryTree1(root->right , maxi);

maxi= max(maxi, max(m, l));
        return maxi;
        }

    int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL){
        //     return 0;
        // }
// int dia1 = diameterOfBinaryTree(root->left);
// int dia2 = diameterOfBinaryTree(root->right);


        // int mxdL = maxDepth(root->left);
        // int mxdR = maxDepth(root->right); 
        // int h1= mxdL +mxdR;
      
        // return max(h1 ,max(dia1, dia2));
int max=-1;
         
        return diameterOfBinaryTree1(root, max);
    }
};