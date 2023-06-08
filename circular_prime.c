#include<stdio.h>

int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r = r*10+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n)&&prime(rev(n)))
    printf("circular prime");
    else if(prime(n))
    printf("prime but not a circular prime");
    else
    printf("not prime");
    
}