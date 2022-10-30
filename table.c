#include<stdio.h>
int main()\
{
    int n;
    printf("enter the no.for which you want table for: ");
    scanf("%d", &n);
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }
    return 0;

}