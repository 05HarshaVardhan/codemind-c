#include<stdio.h>

int prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                c++;
            }
        }
    }
    printf("%d",c+1);
    
}
