#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=6; i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d \n", i);
    }
    return 0;
}