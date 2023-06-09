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
    int t;
    scanf("%d",&t);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==t)
        c++;
    }
    printf("%d",c);
}
