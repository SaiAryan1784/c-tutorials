#include<stdio.h>
int main()
{
    for(int i;  ; i++)
    {
        int n;
        printf("enter no.:");
        scanf("%d", &n);
        if(n%2==0)
        {
            printf("even is good, you can continue\n");
        }
        else
        {
            break;
        }
    }
    printf("odd is bad, game over");
    return 0;
}