#include<stdio.h>
int main()
{
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=n-1;i>=n/2;i--)
    {
    printf("%d ",arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}
