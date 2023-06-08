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
    int es=0,os=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        es = es+x[i];
        else
        os = os+x[i];
    }
    int d=es-os;
    if(d>0)
    printf("%d",d);
    else
    printf("%d",-1*d);
}