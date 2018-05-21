#include<stdio.h>
int main()
{
    int a,s,d,f,g,h,j=1,i;
    scanf("%d",&a);
    while(a--)
    {

        g=0;
        scanf("%d",&s);
        for(i=1; i<=s; i++)
        {
            scanf("%d",&d);
            if(d>0)
            {
                g+=d;
            }


        }
        if(g>0)
        {
            printf("Case %d: %d\n",j,g);
        }

        j++;

    }



    return 0;
}
