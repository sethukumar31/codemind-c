#include<stdio.h>
int main()
{
    long int n,r,rev,t=0; 
   scanf("%ld",&n);
   while(n>0)
   {
     r=n%10;
     rev=rev*10+r; 
     n=n/10; 
     t++;
   }
    if(rev%10!=0 && t==10)
    {
    printf("Valid
");
    }
    else
    { 
    printf("Invalid
");
    }
    return 0;
}