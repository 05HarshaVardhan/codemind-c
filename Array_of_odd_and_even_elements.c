#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2!=0)
        printf("%d ",x[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]%2==0)
        printf("%d ",x[i]);
    }
    
}