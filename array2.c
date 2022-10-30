#include<stdio.h>
int main()
{
    int marks[3];
    printf("enter no.1:");
    scanf("%d", &marks[0]);

    printf("enter no.2:");
    scanf("%d", &marks[1]);

    printf("enter no.3:");
    scanf("%d", &marks[2]);//if you try to store or access marks[3] then it will shopw a run  time error
    
    printf("no.1 = %d, no.2 = %d, no.3 = %d", marks[0], marks[1], marks[2]);

    return 0;
}