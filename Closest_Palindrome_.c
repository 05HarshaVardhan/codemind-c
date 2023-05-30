#include<stdio.h>

int ispall(int n)
{
    int m=n,r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    if(r==m)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int d1=0,d2=0;
    int i,j;
    for(i=n-1;i>0;i--)
    {
        if(ispall(i))
        {
            d1 = n-i;
            break;
        }
    }
    
    for(j=n+1;;j++)
    {
        if(ispall(j))
        {
            d2 = j-n;
            break;
        }
    }
    
    if(d1>d2)
    {
        printf("%d",j);
    }
    else if(d1<d2)
    {
        printf("%d",i);
        
    }
    else
    printf("%d %d",i,j);
    
}