#include<stdio.h>

int isprime(int n)
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
    int n;
    scanf("%d",&n);
    int d1 =0,d2=0;
    
    for(int i=n;i>=0;i--)
    {
        if(isprime(i))
        {
            d1 = n-i;
            break;
        }
    }
    for(int j=n;;j++)
    {
        if(isprime(j))
        {
            d2 = j-n;
            break;
        }
    }
    
    int min = d1<d2?d1:d2;
    printf("%d",min);
    
}