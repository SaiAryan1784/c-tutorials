#include<stdio.h>
int main() {
    int a;
    printf("enter no.");
    scanf("%d", &a);

    if(a >= 18) 
    {
        printf("person is an adult");
    }
    else if(a>=13 && a <18) 
    {
        printf("person is a teenager");
    }
    else 
    {
        printf("person is a child");
    }
}