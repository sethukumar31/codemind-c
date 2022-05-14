#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int lenght,i,max;
    scanf("%[^
]",str); 
    //printf("%s",str);
    lenght=strlen(str);
    max=str[0];
    for(i=0;i<lenght;i++)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
    }
    printf("%c",max);
}