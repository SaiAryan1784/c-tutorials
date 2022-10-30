#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("newtext.txt","r");
    if(fptr==NULL)
    {
        printf("file doesn't exist \n");
    }
    else
    {
        fclose(fptr);
    } 
    return 0;
}