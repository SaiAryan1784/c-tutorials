#include<stdio.h>


// Function Declation 
int climbStairs(int);


// Function Definition
int climbStairs(int n) 
{
    int a = 1, b = 1;

    while (n--)
    {
        a = (b += a) - a;
    }

    return a;
}


int main()
{
    int n = 5;
    int ret =  climbStairs(n);
    printf("%d\n", ret);

    return 0;
}