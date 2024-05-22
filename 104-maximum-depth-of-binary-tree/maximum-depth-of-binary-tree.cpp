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
// void calcMaxDepth(TreeNode* root , int &c){
//  if(root ==NULL){
//             return 0;
//         }
//        calcMaxDepth(root, c); 
// }
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
};