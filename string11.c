//salting
#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s", password);
    salting(password);
}


void salting(char passsword[])
{
    char salt[] = "123";
    char newpass[200];
    
    strcpy(newpass, passsword);// newpass = "test"
    strcat(newpass, salt);// newpass = "test" + "123"
    puts(newpass);
}