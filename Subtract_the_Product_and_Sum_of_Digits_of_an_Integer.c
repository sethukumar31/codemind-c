#include<stdio.h>
int main()
{
    int n,r,k,sum=0,prod=1;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    k=prod-sum;
    printf("%d",k);
    return 0;
}