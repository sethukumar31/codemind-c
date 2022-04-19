#include<stdio.h>
int main()
{
    int l,b,w,c,a,k;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=2*w*(l+b+2*w);
    k=a*c;
    printf("%d",k);
    return 0;
}