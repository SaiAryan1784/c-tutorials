//string format specifier
#include<stdio.h>
int main()
{
    // char name[] = "sai";

    char str[50];
    printf("enter name: ");
    // scanf("%s", &str);// cannot input multiword string (will ignore the words after space)
    // printf("Your name is %s", str);//only first name will be printed

    // gets(str);//worked
    fgets(str, 50, stdin);
    puts(str);
    return 0;
}