#include<stdio.h>

struct student 
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1001, 5.5, "sai1"};
    printf("roll no. %d\n", s1.roll);

    return 0;
    
}