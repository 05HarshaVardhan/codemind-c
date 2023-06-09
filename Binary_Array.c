#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]!=0 && x[i]!=1)
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    
}