#include<stdio.h>
#define ar 15000
int main()
{
    int a,s,d,f,g,h=0,c=0,i,j,isPrime;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&s);
        c=0;

        for(i=2; i<= ar; i++)
        {

            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                c++;
                if(s==c)
                {
                    printf("%d\n", i);
                    break ;
                }
            }
        }
    }



    return 0;
}
