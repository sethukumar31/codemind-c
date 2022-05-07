#include<stdio.h>
int main()
{
    int arr[100],n,i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
         if(arr[i-1]%2==1 && arr[i+1]%2==1)
            {
                r++;
            }
        }
    }
    printf("%d",r);
}