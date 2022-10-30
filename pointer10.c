#include<stdio.h>

void twice(int *n);

int main()
{
    int a = 3;
    twice(&a);
    printf("%d", a);
    return 0;

} 

void twice(int *n)
{
    *n = 2*(*n);
}