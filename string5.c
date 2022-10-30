#include<stdio.h>
#include<string.h>

int countlength(char arr[]);

int main()
{
    char name[100];
    // printf("enter the string:");
    fgets(name, 100, stdin);
    printf("length is : %d \n", countlength(name));
    printf("length though strlen func. is: %d ", strlen(name));
    return 0;
}


int countlength(char arr[])
{
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}