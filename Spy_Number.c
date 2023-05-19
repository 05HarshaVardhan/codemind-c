#include<stdio.h>

int sod(int n)
{
    int s=0;
    while(n>0)
    {
        int r = n%10;
        s = s+r;
        n/=10;
    }
    return s;
}

int pod(int n)
{
    int p =1;
    while(n>0)
    {
        int r = n%10;
        p*=r;
        n/=10;
    }
    return p;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(sod(n)==pod(n))
    printf("Spy Number");
    else
    printf("Not Spy Number");
    
}