#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    int n,m;
    scanf("%d%d%d",&x,&y,&z);
    n=pow(x,y);
    m=n%z;
    printf("%d",m);
    return 0;
}