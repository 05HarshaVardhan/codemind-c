#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    int a=0,b=1;
    int s;
    printf("0 1 ");
    while(c<n-2)
    {
       s=a+b;
       printf("%d ",s);
       a=b;
       b=s;
       c++;
    }
    
}