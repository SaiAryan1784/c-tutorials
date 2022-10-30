#include<stdio.h>
int main()
{
    //Pointer to Pointer

    // int x;
    // int *ptr;
    // int **pptr;

    // float x;
    // float *ptr;
    // float **pptr;

    char x;
    char *ptr;
    char **pptr;

    ptr = &x;
    *ptr = 'a';
    pptr = &ptr;

    printf("%c, %u, %u", x, ptr, pptr);

    return 0;
}