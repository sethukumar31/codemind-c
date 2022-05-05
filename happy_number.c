#include<stdio.h>
int main()
{
    int n,r,r1,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+r*r;
            n=n/10;
        }
        //printf("%d ",r1);
        n=sum;
    }
    //printf("%d %d",sum,n);
    if(sum==1 || sum==7)
    {
        printf("True
");
    }
    else
    printf("False
");
    return 0;
}