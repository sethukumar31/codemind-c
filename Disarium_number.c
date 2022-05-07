#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i,c=0,arr[100],k=1,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        c++;
        arr[k]=r;
        k++;
        n=n/10;
    }
    int l=1;
    for(i=k-1;i>=1;i--)
    {
        sum+=pow(arr[i],l);
       // printf("%d ",arr[i]);
        l++;
    }
    if(sum==t)
    printf("True");
    else
    printf("False");
}