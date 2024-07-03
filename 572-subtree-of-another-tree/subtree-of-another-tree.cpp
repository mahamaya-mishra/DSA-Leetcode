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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p== NULL && q==NULL){
            return true;
        }
        if(p== NULL && q!=NULL){
            return false;
        }else if(p!= NULL && q==NULL){
                        return false;

        }
        if(p->right ==NULL && q->right == NULL && p->left ==NULL && q->left == NULL && p->val == q->val){
            return true;
        }
bool a= isSameTree(p->right, q->right);
bool b= isSameTree(p->left, q->left);

if(p->val == q->val){
    return a && b;
}else{
    return false;
}

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root ==NULL && subRoot == NULL){
            return true;
        }
         if(root ==NULL && subRoot != NULL){
            return false;
        }
         if(root !=NULL && subRoot == NULL){
            return false;
        }
bool c= isSameTree(root, subRoot);
if(c== true){
    return true;
}
        bool a = isSubtree(root->left, subRoot);
                bool b = isSubtree(root->right, subRoot);
                return a || b;

        
    }
};