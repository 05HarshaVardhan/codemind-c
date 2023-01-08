#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[10000];
    for(int i=0;i<2*n;i++)
    {
        scanf("%s",str);
    }
    printf("%s",str);
}