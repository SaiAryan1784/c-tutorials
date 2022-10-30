#include<stdio.h>
int main()
{
    int age = 22;
    int _age = 33;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference - %u\n", ptr-_ptr);//adjacent address 
    _ptr = &age;
    printf("comparison - %u\n", ptr == _ptr);
    return 0;
}