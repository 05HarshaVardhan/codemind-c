#include<stdio.h>

int powe(int n,int p)
{
    int s =1;
    for(int i=1;i<=p;i++)
    {
        s=s*n;
    }
    return s;
}

int dc(int n)
{
    int c=0;
    int r;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int d= dc(n);
    int s=0;
    int m=n;
    int r;
    while(n>0)
    {
        r=n%10;
        s=s+powe(r,d--);
        n/=10;
    }
    if(s==m)
    printf("True");
    else
    printf("False");
}