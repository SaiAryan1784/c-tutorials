#include<stdio.h>
int main() 
{
    for(int i=1;  ;i++)
    {
        int n;
        printf("enter no.:");
        scanf("%d", &n);
        if(n%7==0)
        {
            printf("multiple of 7 is: %d \n", n);
            break;
        }
        printf("not a multiple of 7 %d", n);
    }
}