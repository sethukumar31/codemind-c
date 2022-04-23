#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,d,rev=0,temp=0,c=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            c++;
        }
        rev=(rev*10)+d;
        n=n/10;
    }
        printf("%d",rev);
    
}