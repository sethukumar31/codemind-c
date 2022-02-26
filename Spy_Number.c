#include <stdio.h>
#include<math.h>
int main()
{
    int n,mult=1,sum=0;
    int d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        mult=mult*d;
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