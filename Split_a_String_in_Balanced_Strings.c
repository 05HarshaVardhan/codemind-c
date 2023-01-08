#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char ch[1000];
    scanf("%s",ch);
    int c1=0,c2=0,c=0;
    n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='R')
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if(c1==c2)
        {
            c++;
        }
    }
    printf("%d",c);
}