#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int r=0;
    int m=n;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
    }
    
    if(r==m)
    printf("True");
    else
    printf("False");
}