#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int a=0,b=1;
    int s=0;
    while(s<n)
    {
        s=a+b;
        a=b;
        b=s;
    }
    if(b==n)
    printf("True");
    else
    printf("False");
    
}