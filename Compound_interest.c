#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r,cp,x,y;
    scanf("%lf%lf%lf",&p,&r,&t);
    x=1+(r/100);
    y=pow(x,t);
    cp=p*y;
    printf("%.2lf",cp);
}