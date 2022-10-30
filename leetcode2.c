#include<stdio.h>
#include<string.h>
int main()
{
    int k;
    int n=-1;
    char s[10] = "aabb";
    for(int i=0; s[i]!='\0'; i++)
    {
        for(k=i+1; s[k]!='\0'; k++)
        {
            // printf("%d,%d \n", s[i], s[k]);
            if(s[i]==s[k])
            {
               break;
            }
        }
        if(s[k]=='\0')
        {
            // printf("%d\n", k);
            n=i;
            break;
        }
    }
    printf("%d", n);
    return 0;
}