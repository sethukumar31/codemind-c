#include<stdio.h>
int main()
{
   long int n,arr[100],sum=0,i;
   scanf("%ld",&n);
   for(i=0;i<n;i++)
   {
       scanf("%ld",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }
   printf("%ld",sum);
   return 0;
}