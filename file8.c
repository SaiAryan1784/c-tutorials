#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text3.txt","r");
    int n;
    fscanf(fptr, "%d", &n);
    printf("num = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("num = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("num = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("num = %d \n", n);
    fscanf(fptr, "%d", &n);
    printf("num = %d \n", n);
    
    fclose(fptr);
    return 0;
}