#include<stdio.h>

int sos(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s= s+r*r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,r;
    while(n>9)
    {
        s=sos(n);
        n=s;
    }
    if(n!=1)
    printf("False");
    else
    printf("True");
}