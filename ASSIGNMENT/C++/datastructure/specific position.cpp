SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* neww = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* need;
    for(int i=1;i<=position;i++){
        if(i==position){
            need=temp->next;
        }
        else{
            temp=temp->next;
        }
    }

    temp->next=neww;
    neww->next=need;
    return llist;
}
