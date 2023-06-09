#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int max=-10000;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
        max = x[i];
    }
    printf("%d",max);
}