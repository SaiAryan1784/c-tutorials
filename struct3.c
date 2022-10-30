#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
}


int main()
{
    struct student ece[100];
    ece[0].roll=1000;
    ece[0].cgpa=1.0;
    strcpy(ece[0].name, "sai1");

    printf("name= %s \n", ece[0].name);

    return 0;
}
