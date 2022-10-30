//pointer arithmetic
#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);

    float price = 22;
    float *pfr = &price;
    printf("%u\n", pfr);
    pfr++;
    printf("%u\n",pfr);

    char alp = 'a';
    char *pcr = &alp;
    printf("%u\n",pcr);
    pcr++;
    printf("%u\n",pcr);


    return 0;
}