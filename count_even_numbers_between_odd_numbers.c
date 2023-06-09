#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        
    }
    int c=0;
    for(int i=1;i<n-1;i++)
    {
        if((x[i-1]%2!=0 && x[i+1]%2!=0) && x[i]%2==0)
        c++;
    }
    printf("%d",c);
}