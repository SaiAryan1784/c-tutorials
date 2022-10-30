#include<stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printinfo( struct student s1);

int main()
{
    struct student s1 = {1001, 9.2, "sai1"};

    printinfo(s1);
    struct student*ptr = &s1;
    printf("roll %d \n", (*ptr).roll);
    printf("roll Arrow %d \n", ptr->roll); //arrow symbol used instead of astrix
    printf("roll name %s \n", ptr->name);
    printf("roll cgpa %f \n", ptr->cgpa);
    
    return 0;
}

void printinfo(struct student s1)
{
    struct student*ptr = &s1;
    printf("roll %d \n", (*ptr).roll);
    printf("roll Arrow %d \n", ptr->roll); //arrow symbol used instead of astrix
    printf("roll name %s \n", ptr->name);
    printf("roll cgpa %f \n", ptr->cgpa);
    

}

