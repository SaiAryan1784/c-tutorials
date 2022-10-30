#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x=3;
    int y=5;
    _swap(&x, &y);
    printf("%d, %d",x, y);
    return 0;
}

// void swap(int a, int b)
// {
//     int t=a;
//     int a=b;
//     int b=t;
//     printf("%d, %d", a, b);
// }

void _swap(int *a, int *b)
{
    int t=*a;
     *a = *b;
     *b = t;
    printf("%d, %d", a, b);

}