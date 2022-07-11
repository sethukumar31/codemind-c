#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=0;i<n;i+=2)
   {
        for(j=1;j<=arr[i+1];j++)
        printf("%d ",arr[i]);
   }
  // printf("%d",c);
    return 0;
}