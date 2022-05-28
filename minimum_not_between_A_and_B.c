#include<stdio.h>
int main()
{
    int n,arr[200],i,j,a,b,min=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d %d",&a,&b);
     min=100000;
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
           c++;
         //  printf("%d ",arr[i]);
           if(min>arr[i])
           {
               min=arr[i];
           }
        }
    }
   // printf("%d",min);
    if(c==0)
    {
      printf("-1");
    }
    else
    {
    printf("%d",min);
    }
    return 0;
}