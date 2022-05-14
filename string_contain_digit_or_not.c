#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int lenght,i,max,c=0;
    scanf("%[^
]",str); 
    //printf("%s",str);
    lenght=strlen(str);
    //max=str[0];
    for(i=0;i<lenght;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
              c++;
        }
    }
    if(c>1)
    printf("Contains %d digit",c);
    else
    printf("Doesn't contain digit");
}