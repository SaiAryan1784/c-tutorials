#include<stdio.h>
int main() {
    int a;
    printf("enter the marks:");
    scanf("%d", &a);
    if(a>40){
        printf("you pass");
    }
    else{
        printf("you fail");
    }
}