#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int l=strlen(str);
    int t=0;
    if(str[0]=='a' || str[0]=='e' || str[0]=='i' || str[0]=='o' || str[0]=='u')
    {
        printf("V");
        t=0;
    }
    else
    {
        printf("C");
        t=1;
    }
    for (int i=1;i<l;i++)
    {
        if(t==0)
        {
            if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            {
                printf("C");
                t=1;
            }
        }
        else if(t==1)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                printf("V");
                t=0;
            }
        }
    }
}
