#include<stdio.h>
int main()
{
    int a,s,d,f,i,j,arr[4]={1,0,1,1};
    for(i=0;i<4;i++)
    {
        if(arr[i]==1)
        {
            printf("Dirty\n");
        }
        else
        {
            printf("Clean\n");
        }
    }


   return 0;
}
