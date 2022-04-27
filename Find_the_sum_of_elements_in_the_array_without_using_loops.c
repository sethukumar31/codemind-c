#include<stdio.h>
int main()
{
    int n,arr[100],i,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    i=0;
    label:
    if(i<n)
    {
        sum=sum+arr[i];
        i++;
        goto label;
    }
    printf("%d",sum);
    return 0;
}