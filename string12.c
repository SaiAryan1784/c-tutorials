//slicing
#include<stdio.h>

void slicing(char str[], int n, int m);

int main()
{
    char str[] = "hello world";
    slicing(str, 3, 6);
}

void slicing(char str[], int n, int m)
{
    char newstr[100];
    int j=0;
    for (int i=n; i<=m; i++, j++)
    {
        newstr[j]=str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}