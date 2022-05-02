#include<stdio.h>
#include<string.h>
int main()
{
    char st[200],i,length;
     scanf("%[^
]",st);
     length=strlen(st);
     for(i=length-1;i>=0;i--)
     {
        printf("%c",st[i]);
     }
    return 0;
}