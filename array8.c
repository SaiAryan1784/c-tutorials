//multidimensional array
#include<stdio.h>
int main()
{
    int arr[2][3] = {{1,2,3}, {2,3,4}};
    printf("%d ",arr[0][0]);
    printf("%d ",arr[0][1]);
    printf("%d\n",arr[0][2]);
    printf("%d ",arr[1][0]);
    printf("%d ",arr[1][1]);
    printf("%d ",arr[1][2]);
    return 0;
}