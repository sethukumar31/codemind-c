#include<stdio.h>
int main()
{
    int n,rev,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("True
");
    }
        else
    {
        printf("False
");
    }
    return 0;
}