#include<stdio.h>
int main()
{
    int n,m,r,arr[100],k=0,i,max=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        arr[k]=r;
        k++;
        n=n/10;
    }
    max=arr[0];
    for(i=0;i<=k;i++) 
  {  
    if(arr[i]>max)
    { 
        max=arr[i];
    }
}
  printf("%d",max);
  return 0;
}