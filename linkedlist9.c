#include<stdio.h>

//deleting the node at particular position...

void del_pos(struct node **head, int position)//address of head and position
{
    struct node *current= *head;
    struct node *previous= *head;
    if(*head==NULL)
    printf("list is empty");
    else if(position==1)
    {
        *head = current->link;
        free(current);
        current NULL;
    }
    else
    {
        while(position!=1)
        {
            previous=current;
            current=current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current=NULL;
    }
}