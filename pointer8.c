#include<stdio.h>

void printAdd(int n);
int main()
{
    int n=4;
    printf("%u\n", &n);
    printAdd(n);
    return 0;
}

void printAdd(int n)
{
    printf("%u\n", &n);
}
