// function to delete nth node
void deletePosition(struct Node** head, int n){
    struct Node* temp = *head;
    struct Node* previous;

    //if the head node itself needs to be deleted
    int size = getCurrSize(*head);
    
    // not valid
    if(n < 1 || n > size){
        printf("Enter valid position\n");
        return;
    }
    
    // delete the first node
    if(n == 1){
        // move head to next node
        *head = (*head)->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }
    
    // traverse to the nth node
    while (--n) 
    {
        // store previous link node as we need to change its next val
        previous = temp; 
        temp = temp->next; 
    }
    // change previous node's next node to nth node's next node
    previous->next = temp->next;
    printf("Deleted: %d\n", temp->data);

    // delete this nth node
    free(temp);
}