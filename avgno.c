#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter no. 1:");
    scanf("%d", &a);
    printf("Enter no. 2:");
    scanf("%d", &b);
    printf("enter no. 3:");
    scanf("%d", &c);
    int sum;
    sum=a+b+c;
    printf("the average of 3 no.s is: %d", sum/3);  
    return 0;

}