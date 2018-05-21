#include<stdio.h>
#include<string.h>

int main()
{
    int a,i,d=1,s=0;
    char arr[20];
    scanf("%d",&a);
    gets(arr);
    s=strlen(arr);
    s=s-1;
    for(i=a;i>0;i-=s)
    {

        d=d*i;


    }
    printf("%d\n",d);

    return 0;
}
