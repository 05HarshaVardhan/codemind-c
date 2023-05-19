#include<stdio.h>


int dc(int n)
{
    int r,k=0;
    while(n>0)
    {
        r=n%10;
        k++;
        n=n/10;
    }
    return k;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=n,k;
    k=dc(n);
    int x[k],r;
    for(int i=k-1;i>=0;i--)
    {
        r=n%10;
        x[i]=r;
        n=n/10;
    }
    for(int i=0;i<k;i++)
    {
        if(x[i]!=9)
        {
            x[i]=9;
            break;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d",x[i]);
    }
}