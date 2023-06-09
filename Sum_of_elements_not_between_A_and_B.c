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
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b )
        continue;
        else
        c+=x[i];
    }
    printf("%d",c);
}