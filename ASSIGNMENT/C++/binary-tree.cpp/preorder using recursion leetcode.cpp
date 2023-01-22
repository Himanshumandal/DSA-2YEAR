class Solution {
public:
vector<int>a;
    vector<int> preorderTraversal(TreeNode* root) {
        
       if(root){

           a.push_back(root->val);
           preorderTraversal(root->left);
           preorderTraversal(root->right);
       }
        return a;
    }
};
