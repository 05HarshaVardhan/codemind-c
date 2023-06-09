#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    int max = -220;
    for(int i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b)
        continue;
        else
        {
            if(max<x[i])
            max=x[i];
        }
    }
    if(max == -220)
    printf("-1");
    else
    printf("%d",max);
}