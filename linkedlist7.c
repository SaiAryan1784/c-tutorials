#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    
    int ptr;

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

    head = del_first(head); 

    ptr = head;

    while(ptr!=NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}

struct Node* del_first(struct Node * head)
{
    if(head == NULL)
    {
        printf("list is already empty");
    }
    else
    {
        struct Node *temp = head;
        head = head-> next;
        free(temp);
        temp=NULL;
    }
    return head;
}