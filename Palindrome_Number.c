#include<stdio.h>
int main()
{
    int n,ar[100],t,i,r,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        rev=0;
        t=ar[i];
        while(ar[i]>0)
        {
            r=ar[i]%10;
            rev=(rev*10)+r;
            ar[i]=ar[i]/10;
        }
        if(t==rev)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}