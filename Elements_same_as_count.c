#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c==arr[i])
        {
            m++;
            printf("%d ",arr[i]);
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}