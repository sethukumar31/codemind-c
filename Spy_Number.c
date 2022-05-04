#include<stdio.h>
#include<math.h>
int main()
{
    int n,mult=1,sum=0,r;
    scanf("%d",&n);
    while(n>0) 
    {
        r=n%10;
        sum=sum+r;
        mult=mult*r;
        n=n/10;
    }
    if(sum==mult)
    {
        printf("Spy Number
");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}