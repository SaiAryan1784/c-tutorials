#include<stdio.h>

#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* del_first(struct node * head)
{
    if(head == NULL)
    {
        printf("list is already empty");
    }
    else
    {
        struct node *temp = head;
        head = head-> link;
        free(temp);
        temp=NULL;
    }
    return head;
}

struct node* 


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 45;
    head->link = second;

    second->data = 98;
    second->link = NULL;

    third->data = 112;
    third->link = NULL;

    head = del_first(head);

}

