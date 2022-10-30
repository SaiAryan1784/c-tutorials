//reverse
#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i=0; i<n/2; i++)
    {
        int a = arr[i];
        int b = arr[n-i-1];
        int t = a;
        arr[i] = b;
        arr[n-i-1] = t;
        printf("%d\n", arr[i]);
        printf("%d\n", arr[n-i-1]); 
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    // int n = 6;
    // int c = 7;
    // int t = n;
    // n = c;
    // c = t;
    // printf("%d", n);
    // printf("%d", c);
    // printf("%d", t);

}