#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        char ch[1000];
        scanf("%s",ch);
        n=strlen(ch);
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]>=48&&ch[i]<=57)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    }
}