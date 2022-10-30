#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node * next;
};

void linkedlist_traversal(struct Node* ptr)
{
    while(ptr!=NULL)
    {
    printf("Element %d \n", ptr->data);
    ptr = ptr->next;
    }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    

    //allocate memory for nodes in the linked list heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // link first and second notes
    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    //terminate the list at the fourth node
    fourth -> data = 66;
    fourth -> next = NULL;

    linkedlist_traversal(head);

    return 0;
}