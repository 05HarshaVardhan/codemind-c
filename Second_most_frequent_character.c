#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    scanf("%s",ch);
    int n=strlen(ch);
    int m1=0,m2=0,c=0;
    char c1,c2;
    for(int i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(ch[i]==ch[j])
                c++;
            }
        }
        if(c>m1)
        {
            m1=c;
            c1=ch[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        c=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(ch[i]==ch[j])
                c++;
            }
        }
        if(c<m1&&c>m2)
        {
            m2=c;
            c2=ch[i];
        }
    }
    
    if(m2==0)
    {
        printf("-1");
        
    }
    else
    {
        printf("%c",c2);
    }
}