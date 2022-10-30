#include <stdio.h>

void mySwap(int i, int j, int arr[])
{
int tmp;
tmp = arr[i];
arr[i] =arr[j];
arr[j] =tmp;
}

int index = 9;
 int test = 15;
int arr[] = {10, 15, 12, 23, 14, 15, 70, 25, 16, 71};

int getIndex()
{
    int i;

for (i=index;i>=0; i--)
{
    if (arr[i] != test)
    {
    index = i-1;
    return i;
    }
}
}


print()
{
    int i;
for (i=0;i< 10; i++)
{
    printf(" %d", arr[i]);
}
printf("  \n\n");
}

int main()
{
    int i;
 
for (i=0;i<=index; i++)
{
    if (arr[i] == test)
    {
        index = getIndex();
        if (index > i)
        {
        mySwap(i, index, arr);
        printf("  i= %d, index = %d\n", i, index);
        print();
        }
    }
}


return 0;
}