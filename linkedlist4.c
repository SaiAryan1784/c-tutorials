#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void add_at_end(struct Node *head, int data)
{
    struct Node *ptr, *temp;
    ptr = head;
    temp = (struct Node *)malloc(sizeof(struct Node));

    temp->data = data;
    temp->next = NULL;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

void print_data(struct Node *head)
{
    if(head==NULL)
        printf("Linked list is empty");
    struct Node * ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d \n",ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 78;
    fourth -> next = NULL;

    add_at_end(head, 89);

    print_data(head);

    return 0;
}