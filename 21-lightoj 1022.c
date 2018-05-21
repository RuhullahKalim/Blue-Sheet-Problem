#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int a,b;
    double s,q,w;
    scanf("%d", &b);
    for(a=1; a<=b; a++)
    {
        scanf("%lf", &q);
        s=((q+q)*(q+q))-(PI*q*q);
        printf("Case %d: %.2lf\n",a,s);
    }

    return 0;

}
