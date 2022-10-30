#include<stdio.h>
int main()
{
    int arr[4][4]={{6,2,1,3},{4,2,1,5},{9,2,8,7},{4,1,2,100}};
    struct ar
    {
        int row;
        int col;
    };

    int cur_max=0;
    int sum=0;

    struct ar win[7]={{0,0},{0,1},{0,2},{1,1},{2,0},{2,1},{2,2}};

    int gridsize=4;
    // for(int k=0; k<7; k++)
    // {
    //     printf("%d,%d \n",win[k].row,win[k].col);
    // }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            sum=0;
               for(int k=0; k<7; k++)
                {
                    int cr=i+win[k].row;
                    int cc=j+win[k].col;
                    if(cr<4 && cc<4)
                        {
                            printf("%d \n",arr[cr][cc]);
                            sum=sum+arr[cr][cc];
                        }
                    else 
                    break;
                }
                if(sum>cur_max)
                {
                    cur_max=sum;
                }
        }
    }
    printf("%d",cur_max);
}