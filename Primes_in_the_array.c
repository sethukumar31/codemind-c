#include<stdio.h>
int isprime(int i)
{
    int m,c=0,j;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
        if(c==2)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
}
int main()
{
    int n,arr[1000],i,p=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       res=isprime(arr[i]);
       if(res==1)
        {
          p++;
        }
    }
    printf("%d",p);
    return 0;
}