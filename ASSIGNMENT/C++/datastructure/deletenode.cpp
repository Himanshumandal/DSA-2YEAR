SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* temp=llist;
    SinglyLinkedListNode* min;
    SinglyLinkedListNode* max;
    SinglyLinkedListNode* pos;
    if(position==0){
        return llist->next;
    }
    for(int i=0;i<=position+1;i++){
        if(i==position-1){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return llist;  
}
