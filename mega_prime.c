#include<stdio.h>

int dc(int n)
{
    int c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}

int isprime(int n)
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
    if(!isprime(n))
    {
        printf("Not Mega Prime");
        
    }
    else
    {
        int d=dc(n);
        int c=0;
        while(n>0)
        {
            
            int r = n%10;
            if(isprime(r)&&r!=1)
            {
                c++;
                
            }
            n/=10;
        }
        if(c==d)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    
}