#include<stdio.h>
int main(){
    int n;
    int i=1;
    int sum=0;
    printf("enter till which natural no. sum:");
    scanf("%d", &n);
    int k=n;
    while(i <= n) {
        sum+=i;
         printf("%d \n", i);
        i++;
    }

    // while(1 <= n) { Q2
    //     printf("%d \n", n);
    //     --n;
    // }
    
printf("the sum of natural no.s till %d is %d \n", k, sum);

return 0;

}