#include<stdio.h>

int main()
{
    FILE *fptr;

    // char ch = 'M';
    char ch[10]="Mangooo";

    fptr = fopen("text2.txt", "w");

    fprintf(fptr, "%s", ch);
    // fprintf(fptr, "%c", 'a');
    // fprintf(fptr, "%c", 'n');
    // fprintf(fptr, "%c", 'g');
    // fprintf(fptr, "%c", 'o');

    fclose(fptr);


}