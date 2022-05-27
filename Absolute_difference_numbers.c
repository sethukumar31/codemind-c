#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i,k,t,t1,r,rev=0,rev1=0,v,m,o;
    scanf("%d%d",&n,&k);
    o=(pow(10,k));
    t=n%o;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    v=rev%o;
    //printf("%d %d ",t,o);
    while(v>0)
    {
        r=v%10;
        rev1=rev1*10+r;
        v=v/10; 
    }
    m=abs(t-rev1);
    printf("%d",m);
    return 0;
}