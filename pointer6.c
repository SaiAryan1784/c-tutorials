#include<stdio.h>

void swap(int *a,int *b);


int main()
{
    int x = 3;
    int y = 5;
    swap(&x, &y);
    printf("%d, %d", x, y);
    return 0;
}

//call by value
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    //printf("%d , %d\n", a, b);
}