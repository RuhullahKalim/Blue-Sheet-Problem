#include<stdio.h>
int main()
{
    int a,s,d,f,g,h,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        g=0;
        scanf("%d",&s);
        while(s)
        {
            h=s%2;
            g=g+h;
            s/=2;


        }
        if(g%2==0)
        {
            printf("Case %d: even\n",i);
        }
        else
        {
            printf("Case %d: odd\n",i);
        }
    }



    return 0;
}
