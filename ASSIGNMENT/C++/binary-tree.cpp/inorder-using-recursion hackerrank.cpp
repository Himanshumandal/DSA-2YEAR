
    void inOrder(Node *root) {
        if(root!=NULL){
        inOrder(root->left);
       printf("%d ",root->data);
       inOrder(root->right);
        }
    }
