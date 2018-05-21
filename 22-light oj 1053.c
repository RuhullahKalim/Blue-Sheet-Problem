#include<stdio.h>
int main()
{

    int a,s,d,f,g,h,j,i=1,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d %d",&a,&s,&d);
        if(a>s&& a>d)
        {
            f=a*a;
            g=s*s+d*d;
        }

       else  if(s>a&& s>d)
        {
            f=s*s;
            g=a*a+d*d;
        }

       else  if(d>s&& d>a)
        {
            f=d*d;
            g=s*s+a*a;
        }

        if(f==g)
        {
            printf("Case %d: yes\n",i);
        }
        else
        {
            printf("Case %d: no\n",i);
        }

        i++;

    }
    return 0;


}
