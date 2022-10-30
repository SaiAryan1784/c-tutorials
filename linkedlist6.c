void add_at_pos(struct Node* head, int data, int pos)
{
    struct Node *ptr = head;
    struct Node * ptr2 = malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr2 -> next = NULL;

    pos--;
    while (pos!=1)
    {
        ptr = ptr->next;
        pos--;
    }
    ptr->next = ptr->link;
    ptr->link = ptr2;
}