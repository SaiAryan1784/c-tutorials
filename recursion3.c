#include<stdio.h>
int prod(int n);
int main()
{
    printf("factorial of 5 is ,%d", prod(5));
    return 0;
}

int prod(int n)
{
    if(n == 0)
    {
        return 1;
    }
    int prton = prod(n-1);
    int product = prton*n;
    return product;
}