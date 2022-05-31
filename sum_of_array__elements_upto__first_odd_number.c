#include<stdio.h>
int main()
{
    int n,arr[10000],i,sum,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            sum+=arr[i];
        }
        else
        {
        break;
        }
    }
    printf("%d",sum);
    
}