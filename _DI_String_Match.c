#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int ic=0,dc=strlen(str),i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='I')
        {
            printf("%d ",ic);
            ic++;
        }
        else
        {
            printf("%d ",dc);
            dc--;
        }
    }
    printf("%d ",ic);
}