#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int os=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2!=0)
        os+=x[i];
    }
    printf("%d",os);
}