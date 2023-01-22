class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
     return 1+max(maxDepth(root->right),maxDepth(root->left));
    }
};
