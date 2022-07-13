#include<stdio.h>
int main()
{
    int i,j,k,m1,n,c,arr[1000],str[1000],p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
     for(i=0;i<n;i+=2)
    {
        for(j=1;j<=arr[i+1];j++)
        printf("%d ",arr[i]);
        
    }
}