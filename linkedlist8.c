#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link; //data -> link
    //node is a self referential structure
};

int main()
{
    struct node * head =malloc(sizeof(struct node));
    
    head->data = 45;
    head->link = NULL;

    struct node * current = malloc(sizeof(struct node));

    current->data = 98;
    current->link = NULL;

    head->link = current; //connection from head to second node...

    struct node * 



    return 0;
}