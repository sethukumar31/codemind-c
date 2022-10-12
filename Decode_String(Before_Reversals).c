#include<stdio.h>
#include<string.h>
int main()
{
    int t,a,b,i,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&a,&b);
        char str[a],temp;
        scanf("%s",str);
        while(b)
        {
            k=b-1;
            j=0;
            while(j<k)
	        {
		        temp=str[j];
		        str[j]=str[k];
		        str[k]=temp;
		        j++;
		        k--;
	        }
	        b--;
        }
        printf("%s
",str);
    }
}