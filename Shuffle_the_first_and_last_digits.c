#include<stdio.h>
#include<math.h>

int dc(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    int a,b,p,c,k;
    b=n%10;
    k=dc(n);
    p=pow(10,k-1);
    a=n/p;
    c=n%p-b;
    long long int nw=(b*p)+c+a;
    printf("%lld",nw);
}