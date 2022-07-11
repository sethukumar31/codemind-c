#include<stdio.h>
int main()
{
    int n,arr[100],i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>=arr[i])
        {
            printf("no");
            return 0;
        }
    }
    printf("yes");
return 0;
}