#include<stdio.h>
int m;
int isprime(int i)
{
    int c=0,j;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
        if(c==2)
        {
            m++;
            return i;
        }
        else
        {
            return 0;
        }
        
}
int main()
{
    int n,arr[1000],i,p=0,res;
    float avg=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        res=isprime(arr[i]);
        sum+=res;
    }
    avg=sum/m;
    printf("%.2f",avg);
    return 0;
}