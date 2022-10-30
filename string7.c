//strcat... (concatenates first string with second string).
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "str";
    char str2[] = "ing";
    strcat(str1, str2);  //Joins both strings and stores new value in first string...
    puts(str1);
}