#include<stdio.h>

int rev(int n)
{
    int r=0;
    while(n>0)
    {
        r= r*10+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r1 = rev(n);
    int p1 = n*n;
    int p2 = r1*r1;
    int r2 = rev(p2);
    if(r2==p1)
    printf("True");
    else
    printf("False");
}
