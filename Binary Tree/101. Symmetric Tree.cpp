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
    bool checksymmetric(TreeNode* p,TreeNode* q){
        //both are null
        if(!p && !q){
            return true;
        }
        
        if(!p || !q || p->val != q->val){
            return false;
        }

    return checksymmetric(p->left,q->right) && checksymmetric(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return checksymmetric(root,root);
    }
};
