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
int main()
{
    int n;
    scanf("%d",&n);
    int p = n*n;
    int c = sod(p);
    if(n==c)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}