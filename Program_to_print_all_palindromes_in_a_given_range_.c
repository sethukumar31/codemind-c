#include<stdio.h>
int main()
{
    int a,b,i,t,r,rev;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        rev=0;
        t=i;
        while(t)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        r=0;
        if(i==rev)
        printf("%d ",rev);
    }
    return 0;
}