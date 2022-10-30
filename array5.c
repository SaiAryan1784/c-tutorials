#include<stdio.h>
int main()
{
    int aadhar[10];
    int *ptr = &aadhar[0];
    for(int i=0; i<10; i++)
    {
        printf("enter the no.- ");
        scanf("%d", &aadhar[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\n",aadhar[i]);
    }
    return 0;
}