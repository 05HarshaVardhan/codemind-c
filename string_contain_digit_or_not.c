#include<stdio.h>
#include<string.h>

int main()
{
    int c=0,n;
    char ch[10000];
    scanf("%s",ch);
    n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]>=48&&ch[i]<=57)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",c);
    }
}