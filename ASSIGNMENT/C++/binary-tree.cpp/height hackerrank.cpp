 int height(Node* root) {
        // Write your code here.
        if(root==NULL)
        return -1;
        return 1+max(height(root->right),height(root->left));
    }
