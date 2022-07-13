#include<stdio.h>
int main()
{
  int n,arr[1000],i,j,ar1[1000],k=0,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
      //printf("%d",arr[i]);
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]==arr[j])
          {
              c=1;
              //ar1[k++]=arr[i];
              arr[j]=-1;
          }
      }
  }
 //
  for(i=0;i<n;i++)
  {
      if(arr[i]>=0)
      {
      printf("%d ",arr[i]);
      }
  }
}
