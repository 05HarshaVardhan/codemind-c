#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    scanf("%[^
]s",ch);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%c",ch[i]);
    }
}