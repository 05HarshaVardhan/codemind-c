#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    long long int min = 1000000;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]<min)
        min = x[i];
    }
    printf("%lld",min);
}