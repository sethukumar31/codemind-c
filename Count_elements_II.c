#include<stdio.h>
int main()
{
    int i,j,k,m1,n1,c,arr[10000],str[10000],p=0,m,n;
    scanf("%d%d",&m1,&n1);
    m=m1;
    n=n1;
    for(i=0;i<m1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<m1;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                m--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&str[i]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;k<n1;k++)
                {
                    str[k]=str[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==str[j])
            {
                c++;
                str[j]=0;
            }
        }
        if(c==0)
        {
            if(arr[i]!=0)
            p++;
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<m;j++)
        {
            if((arr[j]==str[i])&&str[i]!=0)
            {
                c++;
            }
        }
        if(c==0)
        {
            if(str[i]!=0)
            p++;
        }
    }
    printf("%d",p);
}