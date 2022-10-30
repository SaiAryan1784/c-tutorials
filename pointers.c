#include<stdio.h>
int main()
{
    // int age = 22;
    // int *ptr = &age;
    // int _age = *ptr;
    // printf("%d, %d, %d", age, *ptr, _age);

    // float age = 22.5;
    // float *ptr = &age;
    // float _age = *ptr;
    // printf("%f, %f, %f", age, *ptr, _age);

    char age = 'a';
    char *ptr = &age;
    char _age = *ptr;
    printf("%c, %c, %c", age, *ptr, _age);

    return 0;
}