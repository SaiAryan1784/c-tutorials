#include<stdio.h>

int func(int x);

int func(int x)
{
    if(x==0)
    return 0;
   
    printf("%d\n",x);
    int sum=0;
    sum=x+func(x-1);
    return sum;
}
int main()
{
    int sum=func(10);
    printf("sum=%d \n",sum);
}