#include<stdio.h>

int main()
{
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i =1 ;i<=n/2;i++)
    {
        if(n%i==0)
        s = s + i;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}