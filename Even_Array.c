#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2==0)
        c++;
        
    }
    if(c==n)
    printf("True");
    else
    printf("False");
    
}