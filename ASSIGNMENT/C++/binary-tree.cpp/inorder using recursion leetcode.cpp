class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>a;
        if(root==NULL){
            return{} ;
            }
           a= inorderTraversal(root->left);
            a.push_back(root->val);
            vector<int>tem=inorderTraversal(root->right);
            for(auto i:tem)
            a.push_back(i);
        return a;
    }
};
