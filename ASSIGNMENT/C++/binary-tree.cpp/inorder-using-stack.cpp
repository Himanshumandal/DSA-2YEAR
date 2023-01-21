class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode*curr=root;
        while(curr || st.empty()==false){
            while(curr){
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            ans.push_back(curr->val);
            curr=curr->right;
            st.pop();
        }
        return ans;
    }
};
