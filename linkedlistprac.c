#include<stdio.h>
#include<stdlib.h>

//5:45

struct node
{
    int data;
    struct node *link;
};

void print(struct node* ptr)
{
    while(ptr!=NULL)
    {
    printf("Element %d \n", ptr->data);
    ptr = ptr->link;
    }
}

void countn(struct node * head)
{
    int count = 0;
    if(head==NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("count=%d\n", count);
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

}
struct node* add_at_beg(struct node* head,int n)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = n;
    ptr->link = head;

    head = ptr;

    return head;

}

void add_at_pos(struct node* head, int data, int pos)
{
    struct node *ptr = head;
    struct node * ptr2 = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr2 -> link = NULL;

    pos--;
    while (pos!=1)
    {
        ptr = ptr->link;
        pos--;
    }
    ptr->link = ptr->link;
    ptr->link = ptr2;
}

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

int main()
{
    struct node *head;
    struct node *second;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));

    head->data = 45;
    head->link = second;

    second->data = 98;
    second->link = NULL;

    add_at_end(head,105);
    head=add_at_beg(head,12);
    head=del_first(head);

    print(head);
    countn(head);

}