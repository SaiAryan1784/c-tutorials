#include<stdio.h>

void storetab(int arr[][10], int n, int m, int number);

int main()
{
    int m = 10;
    int tables[2][10];
    storetab(tables, 0, 10, 2);
    storetab(tables, 1, 10, 3);

    for(int i=0; i<m; i++)
    {
        printf("%d\t",tables[0][i]);
    }
    for(int i=0; i<m; i++)
    {
        printf("%d\t",tables[1][i]);
    }

    return 0;
}

void storetab(int arr[][10], int n, int m, int number)
{
    for(int i=0; i<m; i++)
    {
        arr[n][i] = number * (i+1);
    }
}