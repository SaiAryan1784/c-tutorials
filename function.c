#include<stdio.h>

void printgb();
void printHello(); //declaration
int main()

{
  printHello();//function call
  printHello();
 printgb();
 printgb();
  return 0;   
}
// function definition
void printHello() 
{
    printf("hello! \n");
}
void printgb()
{
    printf("goodbye! \n");
}