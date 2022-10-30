#include <stdio.h>

float celtofar(float c);

int main()
{
   float c;
   printf("enter the temp. in celsius: ");
   scanf("%d", &c);
   float f = celtofar(c);
   printf(" far: %f", f);
   return 0;
}

float celtofar(float c)
{
    int f = c * (9/5) + 32;
    return f;
}