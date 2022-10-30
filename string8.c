//strcmp... compares string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "str";
    char str2[] = "ing"; 
    printf("%d \n", strcmp(str1, str2));  //compares every letter from starting. Printed 1 because str1>str2 as s>i

    char str3[] = "ing";
    char str4[] = "ing";
    printf("%d \n", strcmp(str3, str4));  //compares every letter from starting. Printed 0 because str3=str4 as i=i,n=n,g=g
    
    char str5[] = "ing";
    char str6[] = "str";
    printf("%d", strcmp(str5, str6));  //compares every letter from starting. Printed -1 because str5<str6 as i<s



}