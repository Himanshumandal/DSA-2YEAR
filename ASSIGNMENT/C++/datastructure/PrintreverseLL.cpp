void reversePrint(SinglyLinkedListNode* llist){
SinglyLinkedListNode*curr=llist;
SinglyLinkedListNode*n=NULL;
SinglyLinkedListNode*prev=NULL;
while(curr!=NULL){
    n=curr->next;
    curr->next=prev;
    prev=curr;
    curr=n;
}
SinglyLinkedListNode*head=prev;
SinglyLinkedListNode*temp=head;
while(temp!=NULL){
    cout<<temp->data<<"\n";
    temp=temp->next;
}
}
