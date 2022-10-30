#include<stdio.h>
int main()
{
    FILE *fptr;

    // fptr = fopen("text2.txt", "a");
    fptr = fopen("text2.txt", "w");

    char s[20]="is of yellow colour";

    fprintf(fptr, "%s", s);

    fclose(fptr);

    return 0;
}