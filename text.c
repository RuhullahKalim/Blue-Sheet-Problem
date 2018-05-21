#include<stdio.h>
int main()
{

    int arr[2][5],a,s,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
