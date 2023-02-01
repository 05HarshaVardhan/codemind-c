#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    long long int T,N,A,B,K;
    scanf("%lld",&T);
    while(T--)
    {
        scanf("%lld%lld%lld%lld",&N,&A,&B,&K);
        long long int ans=N/A;
        ans+=N/B;
        long long int a=A,b=B,lcm;
        lcm=(A*B)/gcd(a,b);
        ans-=(2*((N)/lcm));
        if(ans>=K)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}