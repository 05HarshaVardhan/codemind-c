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
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        int d1=0,d2=0;
        for( i=n;i>=0;i--)
        {
            if(isprime(i))
            {
                d1 = n-i;
                break;
            }
        }
        for(j=n;;j++)
        {
            if(isprime(j))
            {
                d2 = j-n;
                break;
            }
        }
        
        
        if(d1<d2)
        printf("%d
",i);
        else if(d1>d2)
        printf("%d
",j);
        else
        printf("%d
",i);
    }
}