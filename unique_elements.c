#include<stdio.h>
int main()
{
    int n,arr[2000],i,j,a,b,m=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //scanf("%d %d",&a,&b);
     //max=0;
    for(i=0;i<n;i++)
    {
        c=1;
       // printf("%d ",arr[i]);
        for(j=0;j<n;j++)
        {
           if(i!=j && arr[i]==arr[j])
           {
              c++;
              arr[j]=-1;
           }
        }
    
    if(c>=1 && arr[i]!=-1)
    {
      printf("%d ",arr[i]);
      m++;
    }
    }          
  if(m==0)
  {
      printf("-1");
  }
    return 0;
}