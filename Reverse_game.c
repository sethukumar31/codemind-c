#include<stdio.h>
int main()
{
    int n,arr[100],i,r,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        rev=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            rev=rev*10+r;
            arr[i]=arr[i]/10;
        }
        printf("%d ",rev);
    }
}