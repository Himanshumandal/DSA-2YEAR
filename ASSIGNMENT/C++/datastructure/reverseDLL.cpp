DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
DoublyLinkedListNode*cur=llist;
DoublyLinkedListNode*n=NULL;
DoublyLinkedListNode*prev=NULL;
while(cur!=NULL){
    n=cur->next;
    cur->next=prev;
    prev=cur;
    cur=n;   
}
return prev;
}
