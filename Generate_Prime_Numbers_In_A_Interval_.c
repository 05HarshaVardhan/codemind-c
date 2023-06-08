#include<stdio.h>

int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i)&&i!=1)
        printf("%d
",i);
    }
}