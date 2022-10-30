#include<stdio.h>
int main()
{
    char *canchange = "hello world";
    puts(canchange);
    canchange = "hello";
    puts(canchange);

    char cannotchange[] = "Hello world";
    puts(cannotchange);
    // cannotchange = "Hello";
    return 0;
}