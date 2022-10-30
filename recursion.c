#include<stdio.h>

void printh(int count);

int main()
{
    printh(5);
    return 0;
}

//recursion

void printh(int count)
{
    if(count == 0) 
    {
        return;
    }
    printf("hello world\n");
    printh(count-1);
}