#include<stdio.h>
int main()
{
    int arr[100],i,j,n,t,fact;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=1;
        for(j=1;j<=arr[i];j++)
        {
        fact=fact*j;
        }
        printf("%d",fact);
        printf("
");
    }
    return 0; 
}