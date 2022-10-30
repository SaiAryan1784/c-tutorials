#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter naturalno.:");
    scanf("%d", &n);
    int i=1;
    while(i <= n)
    {
        if(i%2==0)
        {
            printf("%d \n", i);
             sum+=i;
        }
         
        i++;
        

    }
    printf("sum of odd natural no. till %d is %d",n , sum);
    return 0;
}