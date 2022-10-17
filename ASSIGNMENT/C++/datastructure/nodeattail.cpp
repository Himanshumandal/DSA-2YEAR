SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* neww=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp;
    temp=head;
    if(head==NULL){
        head=neww;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=neww;
        neww->next=NULL;
    }
    return head;
