SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* next= new SinglyLinkedListNode(data);
    next->next=NULL;
    if(llist==NULL){
        next->next=NULL;
    }
    else{
        next->next=llist;
    }
    return next;
}
