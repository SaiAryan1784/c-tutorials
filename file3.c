#include<stdio.h>

int main()
{
    char ch[10];

    FILE *fptr;

    fptr = fopen("text2.txt", "r");

    fscanf(fptr, "%s", ch);
    printf("%s \n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("%c \n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("%c \n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("%c \n", ch);

    // fscanf(fptr, "%c", &ch);
    // printf("%c \n", ch);

    fclose(fptr);

    return 0;
}