//collection of different types of data
#include<stdio.h>
#include<string.h>

struct student  //user defined
    {
        char name[100];
        int roll;
        float cgpa;
    };

int main()
{
    struct student s1;

    s1.cgpa = 7.5;
    //s1.name = "sai"; // wrong
    strcpy(s1.name, "sai"); // right
    s1.roll = 12;

    printf("student name = %s \n", s1.name);
    printf("roll no. = %d \n", s1.roll);
    printf("cgpa = %f", s1.cgpa);
    
    return 0;
}