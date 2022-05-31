#include<stdio.h>
int main()
{
    int n,arr[10000],i,sum1=0,sum2=0,mid;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    mid=n/2;
    for(i=0;i<mid;i++)
    {
        sum1+=arr[i];
    }
    printf("%d
",sum1);
    for(i=mid;i<n;i++)
    {
        sum2+=arr[i];
    }
    printf("%d",sum2);
}