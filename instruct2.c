#include<stdio.h>
#include<math.h>//for pow function... 
int main () {
    int a=5,b=2;
    int sum= a+b;
    int multiply = a*b;
    int power= pow(b,a); //b to the power a
    int modulor= a%b; // % returns remainder for int, doesn't work on float
    printf("%d", -8%3); // negative ans

    return 0;
}