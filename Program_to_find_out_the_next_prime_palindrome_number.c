#include<stdio.h>

int pal(int n)
{
    int m=n;
    int r=0;
    while(n>0)
    {
        r = r*10+n%10;
        n=n/10;
    }
    if(r==m)
    return 1;
    else
    return 0;
}

int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(prime(i)&&pal(i))
        {
            printf("%d",i);
            break;
        }
    }
    
}