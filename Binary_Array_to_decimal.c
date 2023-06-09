#include<stdio.h>

long long int powe(int b)
{
    long long int t = 1;
    for(int i=1;i<=b;i++)
    {
        t*=2;
    }
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int t=0;
    int k =n-1;
    long long int s=0;
    while(t<n)
    {
        s=s+(x[t]*powe(k--));
        t++;
    }
    printf("%lld",s);
}