#include<stdio.h>
int main()
{
    int  t,i,n,s;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&s);

        if(s>10)
        {
            printf("%d %d\n",s-10,s-(s-10));

        }
        else
        {
            printf("0 %d\n",s);
        }

    }

    return 0;
}
