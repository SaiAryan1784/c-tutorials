#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text3.c","w");

    fputc('M',fptr);

    // printf("%s", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}