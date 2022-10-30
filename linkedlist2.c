#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void count_of_nodes(struct Node * head)
{
    int count = 0;
    if(head==NULL)
        printf("Linked list is empty");
    struct Node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("count=%d", count);
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

    count_of_nodes(head);

    return 0;
}