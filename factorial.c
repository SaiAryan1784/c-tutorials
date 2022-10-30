#include<stdio.h>
int main()
{
    int j=1;
    int n;
    printf("enter the no.: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        j*=i;
    }
    printf("the factorial of %d is %d", n, j);
}