#include<stdio.h>
void printbonjour();
void printnamaste();
int main()
{
    char nat;
    printf("enter your nationality (French(F)/Indian(I)):");
    scanf("%c", &nat);
    if(nat=='F')
    {
        printbonjour();
    }
    else if(nat=='I')
    {
        printnamaste();
    }
    else
    {
        printf("enter available nationality please!");
    }
    return 0;
}

void printbonjour()
    {
        printf("Bonjour!");
    }

void printnamaste()
    {
        printf("Namaste!");
    }