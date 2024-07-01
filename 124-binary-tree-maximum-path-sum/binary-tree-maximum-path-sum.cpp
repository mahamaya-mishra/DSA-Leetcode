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
//find max path fr each node n then return max of  that.
int maxPathSumHelper(TreeNode* root, int &maxi){

if(root ==NULL){
    return NULL;
}
int right= max(0,maxPathSumHelper(root->right, maxi));
int left= max(0,maxPathSumHelper(root->left, maxi));
maxi =max(maxi, root->val + right + left);
return root->val + max(left, right);

}


    int maxPathSum(TreeNode* root) {
        int maxi =INT_MIN;
        int a= maxPathSumHelper(root, maxi);
        return maxi;
    }
};