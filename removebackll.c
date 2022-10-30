//two pointers at second last and last node of the list

#include<stdio.h>
#include<stdlib.h>

struct node * del_last(struct node* head);
struct node
{
    int data;
    struct node * link;
};

int main()
{
    head = del_last(head);
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

struct node * del_last(struct node *head)
{
    if(head==NULL)
        printf("list is empty");
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        struct node * temp = head;
        struct node * temp2 = head;
        while(temp->link!=NULL)
        {
            temp2 = temp;
            temp = temp->link;
        }
        temp2->link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}