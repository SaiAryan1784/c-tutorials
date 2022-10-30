#include <stdio.h>
int main() 
{
    int r;
    int i;
    printf("enter the radius of circle:");

    scanf("%d", &r);

    for (i=1;i<=10;i++)
    {
       printf("%d x %d = %d\n", r, i, r*i);
    }
    
    return 0;
}