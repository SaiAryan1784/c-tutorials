#include<stdio.h>
#include<string.h>

struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1;
    s1.roll = 116;
    s1.cgpa = 9.6;
    strcpy(s1.name, "sai");

    printf("%d \n", s1.roll);
    printf("%f \n", s1.cgpa);
    printf("name : %s \n", s1.name);

    struct student s2;
    s2.roll = 106;
    s2.cgpa = 8.6;
    strcpy(s2.name, "sai2");

    printf("%d \n", s2.roll);
    printf("%f \n", s2.cgpa);
    printf("name : %s \n", s2.name);

    struct student s3;
    s3.roll = 126;
    s3.cgpa = 1.6;
    strcpy(s3.name, "sai3");

    printf("%d \n", s3.roll);
    printf("%f \n", s3.cgpa);
    printf("name : %s \n", s3.name);

    return 0;

}