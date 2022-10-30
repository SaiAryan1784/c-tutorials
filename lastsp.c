#include<stdio.h>
#include<string.h>

int length(char arr[]);
int idenspace(char arr[], int n);

int main()
{
    char s[]="  world   ";
    int n=length(s);
    printf("%d \n",n);
    int m=idenspace(s, n);
    printf("Ans= %d",m);
}

int length(char arr[])
{
    int i;
    for(i=0; arr[i]!='\0'; i++)
    {
        printf("%d \n", i);
    }
    printf("%d \n",i);
    int n=i-1;
    return n;
}

int idenspace(char arr[], int n)
{
    int i=0;
    for(n; arr[n]==' '; n--);

    for(n; arr[n]!=' '; n--)
    {
        i++;

        if(!n)
        {
            printf("Found first index \n");
        break;
        }
    }
    return i;
}