#include <stdio.h>

int q[100];
int head;
int tail;

void Enqueue(int x)
{
    q[tail++] =x;
}

int Dequeue()
{
    return q[head++];
}

int isEmpty()
{

return (head==tail);

}



int main()
{
    head = tail = 0;
    int i;
    int arr[] = {10,20, 1,2, 100, 200};

    for (i=0; i< 6; i++)
    {
        Enqueue(arr[i]);
    }

    while(!isEmpty())
    {
        printf("%d\n", Dequeue());
    }

return 0;
}