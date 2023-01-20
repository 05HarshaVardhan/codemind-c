#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char ch[10000];
    scanf("%s",ch);
    int c=0,t=0;
    n=strlen(ch);
    for(int i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(ch[i]==ch[j])
                {
                    c++;
                }
            }
        }
        if(c==1)
        {
            printf("%d",i);
            t++;
            break;
        }
    }
    if(t==0)
    {
        printf("-1");
    }
}