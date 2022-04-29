#include<stdio.h>
int main()
{
    int n,arr[100],i,r,c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        while(arr[i]>0)
        {
            r=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
     if(c%2==0)
        t++;
    }
    printf("%d",t);
    return 0;
}