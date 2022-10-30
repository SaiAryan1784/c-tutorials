#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

struct ListNode* reverse(struct ListNode *head)
{
    struct ListNode *prev =NULL;
    struct ListNode *nex =NULL;
    
    while(head!=NULL)
    {
        nex = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
    
}