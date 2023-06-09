#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        s+=x[i];
    }
    int t = s/n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]>=t)
        c++;
    }
    printf("%d",c);
}