class Solution {
public:
vector<int>post;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            post.push_back(root->val);
        }
        return post;
    }
};
