#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,n,m=0,q=0,l=0,cp;
    scanf("%lf %lf %lf",&p,&r,&t);
    m=(1+(r/100));
   // l=n*t;
    q=pow(m,t);
    cp=p*q;
    printf("%.2lf",cp);
    return 0;
}