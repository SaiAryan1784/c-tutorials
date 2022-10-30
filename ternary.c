#include<stdio.h>
int main() {
    int a;
    printf("enter age:");
    scanf("%d", &a);

    a >= 18 ? printf("adult \n") : printf("not adult");

    return 0;


}