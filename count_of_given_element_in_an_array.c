#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n,i,min,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&min);
    for(i=0;i<n;i++)
    {
        if(arr[i]==min)
        c++;
    }
       printf("%d",c); 
return 0;
}