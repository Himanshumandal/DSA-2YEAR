
    void postOrder(Node *root) {
        if(root!=NULL){
            postOrder(root->left);
            postOrder(root->right);
            printf("%d ",root->data);
        }
    }
