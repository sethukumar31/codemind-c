#include<stdio.h>
int main()
{
    int arr[100],n,k,mp,b,e,f=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    b=0,e=n-1;
    if(n%2)
    {
        k=(n-1)/2;
        mp=(n-1)/2;
        f=1;
    }
    else
    {
        k=n/2;
    }
    while(k--)
    {
        printf("%d %d ",arr[b],arr[e]);
        b++;//1 2 3 4 5 6 7
        e--;//1 2 3 4 5 6 7
    }
    if(f==1)
    {
        printf("%d 0",arr[mp]);
    }
}


