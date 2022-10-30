#include<stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    fclose(fptr);


    return 0;
}