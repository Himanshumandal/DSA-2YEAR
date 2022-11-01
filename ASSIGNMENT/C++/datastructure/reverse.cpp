SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode*rHead =NULL;
    while(head != NULL){
        SinglyLinkedListNode* node = new SinglyLinkedListNode(head->data);
        node->next = rHead;
        rHead = node;
        
        head = head->next;
    }
    return rHead;
}
