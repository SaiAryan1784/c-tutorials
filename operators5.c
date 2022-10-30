#include<stdio.h>
#include<math.h>
int main() {
    int a=2;
    int b=4;
    //a += b; output 6
    //a *=  b; output 8
    //a /= b; output 0
    //a -= b; output -2
    a %= b; // outout 2
    printf("%d", a);
}