#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        char ch[10000];
    scanf("%s",ch);
    int n=strlen(ch),c=0;
    for(int i=0;i<n;i++)
    {
        if(ch[i]<=57&&ch[i]>=48)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}