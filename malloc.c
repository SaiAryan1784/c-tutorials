#include<stdio.h>
#include<stdlib.h>
int main()
{
    // printf("%d\n", (5*sizeof(int)));
    // printf("%d\n", sizeof(float));
    // printf("%d\n", sizeof(char));
    // return 0;

    int *ptr;
    ptr = (int*) malloc(50 * sizeof(int)); //memory was allocated in runtime...

    ptr[0] = 1; //dynamic size memory
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;

    for(int i=0; i<=3; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;


}