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
 bool isValidBSTHelper(TreeNode* root,  long mini,  long maxi){
    if(root ==NULL){
        return 1;
    }

    if(root->val >=maxi || root->val<=mini){
return false;
    }

bool a= isValidBSTHelper(root->left, mini, root->val);
bool b= isValidBSTHelper(root->right, root->val, maxi);


return a&&b;

}




    bool isValidBST(TreeNode* root) {

         long mini = LONG_MIN;
         long maxi = LONG_MAX;
        
        return isValidBSTHelper(root, mini, maxi);


    }
};