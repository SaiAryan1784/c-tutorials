#include<stdio.h>

//structer to pointer

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1001, 9.2, "sai1"};
    printf("roll no. %d\n", s1.roll);

    struct student*ptr = &s1;
    printf("roll %d \n", (*ptr).roll);


    return 0;

}