#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,i,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //min=arr[0];
    for(i=n-1;i>0;i--)
    {
        if(arr[i]%2!=0)
        {
           printf("%d",i);
           break;
        }
    }
       //printf("%d",i); 
return 0;
}