#include<stdio.h>
#include<math.h>
int isprime(int n)
{
    int i;
    for(i=2;i<pow(n,0.5)+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m,s,i,k,d;
    scanf("%d %d",&n,&m);
    s=n+m;
    k=0;
    i=1;
        while(s>0)
        {
            
            if (isprime(s+i)==1)
            {
               k=(s+i);
               break;
            }
            i++;
        }
    d=k-s;
    printf("%d",d);
    return 0;
}