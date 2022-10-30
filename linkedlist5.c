#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct Node* add_beg(struct Node* head, int d)
{
    struct Node* ptr = malloc(sizeof(struct Node));
    ptr->data = d;
    ptr->next = NULL;

    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    int *ptr;

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

    head -> next = ptr;
    int data = 3;

    head = add_beg(head, data);
    
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr -> next;
    }

    return 0;
}