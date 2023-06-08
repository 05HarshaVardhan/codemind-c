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

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int t = n1+n2;
    int c;
    for(int i=t+1;;i++)
    {
        if(prime(i))
        {
            c=i;
            break;
        }
    }
    printf("%d",c-t);
}